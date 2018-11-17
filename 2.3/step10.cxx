
	#include <iostream>
	
	void rotate(int a[], unsigned size, int shift) {
		
		if (!size) return;
		
		shift %= size;
		
		if (!shift) return;
		
		int t = 0;
		
		for (int i = 0; i < shift; i++) {
			t = *a;
			for (int j = 0; j < (int)size; j++) {
				*(a + j) = *(a + j + 1);
			}
			*(a + size - 1) = t;
		}

	}

	int main() {
		int Msize = 0;
		int Mshift = 0;
		
		std::cout << "Введите размер массива: ";
		std::cin >> Msize;
		
		int *pAr = new int [Msize];
		
		// std::cout << pAr << "\n";
		for (int i = 0; i < Msize; i++) *(pAr + i) = i + 1; 
		
		std::cout << "Введите смещение: ";
		std::cin >> Mshift;
		
		for (int i = 0; i < Msize; i++) std::cout << *(pAr + i) << ' '; 
		
		std::cout << '\n';
		
		rotate(pAr, Msize, Mshift);
		
		std::cout << '\n';

		for (int i = 0; i < Msize; i++) std::cout << *(pAr + i) << ' '; 
			
		std::cout << '\n';
		return 0;
	}



