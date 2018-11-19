
	#include <iostream>
	
	int max_el(int *p, int *q) {
		int max = *p;
		
		for (; p != q; ++p)
			if (*p > max) 
				max = *p;
		
		return max;
	}
	
	int main() {
		int m[10] = { 9, -1, 0, 4, 5, 6, 88, 10, 13, 5 };
		int max = max_el (m, m + 10);
		
		std::cout << "maximum = " << max << std::endl;
		return 0;
	}
