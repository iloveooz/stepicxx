
	#include <iostream>
	
	bool max_element (int *p, int *q, int **res) {
		if (p == q) return false;
		
		*res = p;
		
		for (; p != q; ++p) 
			if (*p > **res) 
				*res = p;
		return true;
	}
	
	int main() {
		int m[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
		int *pmax = 0;
		
		if (max_element(m, m + 10, &pmax)) 
			std::cout << "maximum = " << *pmax << std::endl;
		return 0;
	}
	
	
	
	
