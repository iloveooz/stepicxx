
	#include <iostream>

	int main() {

		char c = '\0';
		
		std::cout << std::noskipws;
		
		while (std::cin.get(c)) { // на каждой итерации считываем один символ в переменную c
		/* здесь можно пользоваться значением прочитанным в переменную c */
		if (c != 'a')
		std::cout << c; // выводим символ, если он не равен 'a'
		}

		std::cout << std::endl;
		return 0;
	}
