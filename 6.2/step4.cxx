
	#include <iostream>
	#include <algorithm>
	#include "step4.hxx"
	
	template <typename Num>
	Num square(Num n) {
		return n * n;
	}

	template <typename Type>
	Type* SortMin(Type *p, Type *q) {
		return *p < *q ? p : q;
	}
	
	template <typename Type>
	void SortMin(Array <Type> &ar) {
		std::cout << '\n';
	}
	
	int main() {
		int a = square <int> (3);
		std::cout << "a = " << a << '\n';
		
		int b = square(a) + square(4);
		std::cout << "b = " << b << '\n';
		
		float *m = new float[10];
		std::cout << SortMin(m, m + 9) << '\n'; // sort <float>
		
		// SortMin(m, &a); // error
		
		Array <double> ad(100, rand() % 100);
		
		SortMin(ad);
		
		return 0;
	}
