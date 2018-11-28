
	#include <iostream>

	struct ivector3d {
		int array[3];
	};
	
	void scale (ivector3d *v, int k) {
		int sum = 0;
		for (int i = 0; i != 3; ++i) {
			v->array[i] *= k; 
			sum += v->array[i];
		}
		
		std::cout << sum << '\n';
	}
	
	
	int main() {
		
		ivector3d iv3d = { 1, 1, 1 };
		
		scale(&iv3d, 2);
		
		return 0;
	}
		
