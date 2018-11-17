
	#include <iostream>
	
	void swap (int* a, int* b) {
		int t = *a;
		*a = *b;
		*b = t;
	}
	
	int main() {
		int k = 10, m = 20;
		char copy[15] = "C-style string";
		std::cout << "До:    " << k << ' ' << m << std::endl;
		swap (&k, &m);
		std::cout << "После: " << k << ' ' << m << std::endl;
		return 0;
	}
	
	
