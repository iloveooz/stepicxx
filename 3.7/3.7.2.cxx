	#include <algorithm> // std::swap
	#include <cstddef>   // size_t
	#include <cstring>   // strlen, strcpy

	struct String {
		String(const char *str = "");
		String(size_t n, char c);
		// конструктор копирования
		String(const String &other);
		// деструктор
		~String();

		/* Реализуйте оператор присваивания */
		String & operator= (const String &other) {
			if (this != &other) {
				delete [] str;
				size = other.size;
				str = new char[size + 1];
				for (size_t i = 0; i != size + 1; ++i) 
					str[i] = other.str[i];
			}
			return *this;
		}

		void append(const String &other);

		size_t size;
		char *str;
	};
