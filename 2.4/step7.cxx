
	#include <iostream>

	void strcat (char *to, const char *from) {
		
		for(; *to != '\0'; *to++);
		while(*to++ = *from++);
		*to = '\0';
	}
	
	
	int main() {
		char string1[] = "principal";
		char string2[] = " Victoria";

		std::cout << "Первая строка: " << string1 << std::endl;
		std::cout << "Вторая строка: " << string2 << std::endl;

		strcat(string1, string2);
		
		std::cout << "Первая строка: " << string1 << std::endl;
		std::cout << "Вторая строка: " << string2 << std::endl;

	}

