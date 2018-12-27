
	#include <iostream>

	void foo(char) { 
		std::cout << "char" << std::endl; 
	}
	
	void foo(signed char) { 
		std::cout << "signed char" << std::endl; 
	}
	
	void foo(unsigned char) { 
		std::cout << "unsigned char" << std::endl; 
	}
	
	int main() {
		
		std::cout << "в результате вызова foo('a') будет выведено signed char" << '\n';
		foo('a');
		
		std::cout << "вызов foo('a') приведет к ошибке компиляции" << '\n';
		foo('a');
		
		std::cout << "x - вызов foo(97) приведет к ошибке компиляции" << '\n';
		// foo(97);
		
		std::cout << "в результате вызова foo('a') будет выведено char" << '\n';
		foo('a');
		
		std::cout << "o - в результате вызова foo(97) будет выведено char" << '\n';
		// foo(97);
		
		std::cout << "в результате вызова foo('a') будет выведено unsigned char" << '\n';
		foo('a');
		
		std::cout << "o - в результате вызова foo(97) будет выведено signed char " << '\n';
		// foo(97);
			
		return 0;
	}
