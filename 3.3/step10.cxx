
	#include <cstddef> // size_t
	#include <cstring> // strlen, strcpy

	struct String {

		/* Реализуйте этот конструктор */
		String(const char *str = "") {
			this->size = (strlen(str));
			this->str = new char[strlen(str) + 1];
			strcpy(this->str, str);
		}
			
			
		size_t size;
		char *str;
	};
