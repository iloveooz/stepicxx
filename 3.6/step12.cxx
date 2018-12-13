
	#include <iostream>
	
	struct String {
	
		// конструктор по строке
		String(const char *str = "");            /* 1 */
	
		// конструктор по элементу
		String(size_t n,  char c);               /* 2 */
	
		// деструктор
		~String();                               /* 3 */
	
		// добавление
		void append(const String &other);        /* 4 */
	
		// возврат длины строки
		size_t length() const;                         /* 5 */
		
		// возврат значения
		char &get(size_t pos);                   /* 6 */
	
		// сравнение
		bool equal(const String &other) const;         /* 7 */
	
	private:
		size_t size;
		char *str;
	};

	int main() {
		
		
		
		
		return 0;
	}
