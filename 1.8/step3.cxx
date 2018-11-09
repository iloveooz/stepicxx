
	#include <iostream>

	bool check(int x) {
		for (int i = 1; i * i < x; ++i)  {
			for (int j = i; j * j < x; ++j) {
				if ( i * i + j * j == x ) {
					std::cout << "i = " << i << ", j = " << j << std::endl;
					return true;
				}
			}
		}
		return false;
	}
	
	int main() {
		int x = 0;
		bool l = false;
		
		std::cout << "Введите x: ";
		std::cin >> x;
		
		l = check(x);
		
		if (l) 
			std::cout << "Верно";
		else 
			std::cout << "Неверно";
		
		std::cout << std::endl;
		return 0;
	}
