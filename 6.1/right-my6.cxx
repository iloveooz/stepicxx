	#include <algorithm>

		template <typename T>
		class Array {
		public:
			// конструктор класса
			explicit Array(size_t size = 0, const T & value = T()) :
			size_(size), data_(new T(size)) {
				std::fill_n(data_, size, value);
			}
					
			// который создает Array размера size, заполненный значениями
			// value типа T. 
			// Считайте что у типа T есть конструктор, который можно вызвать без
			// без параметров, либо он ему не нужен.
			
			//   конструктор копирования, который создает копию параметра. 
			Array(const Array &A) : size_(A.size_), data_(new T(size_)) {
				for (size_t i = 0; i != size_; ++i)
					data_[i] = A.data_[i];
			}

			// деструктор
			~Array() {
				delete [] data_;
			}
			
			void swap(Array &other) {
				std::swap(size_, other.size_);
				std::swap(data_, other.data_);
			}		
			
			// оператор присваивания.		
			Array & operator = (const Array &A) {
				if (&A != this)
					Array(A).swap(*this);
				return *this;
			}
			
			// возвращает размер массива (количество элементов).
			size_t size() const {
				return size_;
			}
			
			// две версии оператора доступа по индексу
			T& operator [] (size_t i) {
				return data_[i];
			}
			
			const T& operator [] (size_t i) const {
				return data_[i];
			}	
			
		private:
			T * data_;
			size_t size_;
			
		};
