
	#include <iostream>
	
	void swap (int &a, int &b) {
		int t = a;
		a = b;
		b = t;
	}
	
	int main() {
		int k = 10, m = 20;
		
		double ms[10000000] = {};
		
		std::cout << "До:    " << k << ' ' << m << std::endl;
		swap (k, m);
		std::cout << "После: " << k << ' ' << m << std::endl;
		std::cin >> ms[0];
		return 0;
	}
	
	
