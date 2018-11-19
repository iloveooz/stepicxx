
	#include <iostream>
	
	int* max_el(int *p, int *q) {
		int* pmax = p;
		
		for (; p != q; ++p)
			if (*p > *pmax) 
				pmax = p;
		
		return pmax;
	}
	
	int main() {
		int m[10] = { 9, -1, 0, 4, 5, 6, 88, 10, 13, 5 };
		int *pmax = max_el (m, m + 10);
		
		std::cout << "maximum = " << *pmax << std::endl;
		return 0;
	}
