
	#include <iostream>
	
	struct IntArray {
		
		size_t size;
		int *data;
		
		explicit IntArray(size_t size) : size(size), data(new int[size]) { }
		
		~IntArray() {
			delete [] data;
		}
	};
	
	int main() {
		
		IntArray A(10);
		
		
		
		return 0;
	}
