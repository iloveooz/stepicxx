
	#include <iostream>
	
	template <typename FIRST, typename SECOND>
	void copy_n(FIRST* kuda, SECOND* otkuda, size_t n) {
		while (n--) {
		*kuda++ = (FIRST)*otkuda++;
		}
	}
	
	int main() {
		std::cout << "START" << '\n';
		
		int ints[] = { 11, 22, 33, 44 };
		double doubles[4] = {};
		
		std::cout << "Содержимое массивов до копирования:" << '\n';
		for (int i = 0; i < 4; i++) {
			std::cout << ints[i] << ' ';
		}

		std::cout << std::endl;

		for (int i = 0; i < 4; i++) {
			std::cout << doubles[i] << ' ';
		}

		std::cout << std::endl;
		
		copy_n(doubles, ints, 4); 
		
		std::cout << "Содержимое массивов после копирования:" << '\n';
		for (int i = 0; i < 4; i++) {
			std::cout << ints[i] << ' ';
		}

		std::cout << std::endl;

		for (int i = 0; i < 4; i++) {
			std::cout << doubles[i] << ' ';
		}
		
		std::cout << std::endl;		
		
		return 0;
	}
