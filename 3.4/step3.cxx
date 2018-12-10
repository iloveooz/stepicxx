	
	#include <iostream>
	
	struct IntArray {
		size_t size;
		int *data;
		
		IntArray(size_t size = 0) { }
		
		explicit IntArray(size_t size) { 
			this->size = size;
		}
		
		~IntArray() { }
		
	};
	
	int main() {
		
		IntArray *arr = new IntArray[10];
		
		std::cout << arr->size << '\n';
		
		delete arr;
		
		return 0;
	}
