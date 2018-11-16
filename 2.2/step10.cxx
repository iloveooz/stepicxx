		
	#include <iostream>

	int io() {
		int d = 0;
		
		std::cin >> d;
		if (d) {
			io();
			std::cout << d << ' ';
		}
		
		return 0;
	}


	int main() {
		
		io();
		
		std::cout << std::endl;
		return 0;
	}
