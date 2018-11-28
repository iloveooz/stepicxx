
	#include <iostream>

	struct ivector3d {
		int *array;
	};
	
	void scale (ivector3d v, int k) {
		int sum = 0;
		for (int i = 0; i != 3; ++i) {
			v.array[i] *= k; 
			sum += v.array[i];
		}
		
		std::cout << sum << '\n';
	}
	
	
	int main() {
		
		int arr[3] = { 1, 1, 1 };
		
		ivector3d iv3d = { arr };
		
		scale(iv3d, 2);
		
		int sum = 0;
		
		for (int i = 0; i != 3; ++i)
			sum += arr[i];
		
		std::cout << sum << '\n';
		
		return 0;
	}
		
