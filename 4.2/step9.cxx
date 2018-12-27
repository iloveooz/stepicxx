
	#include <iostream>
	
	void promotion(char &a) { 
		std::cout << "char" << std::endl; 
	}
	
	void promotion(int  &b) { 
		std::cout << "int"  << std::endl; 
	}
	
	void promotion(long &c) { 
		std::cout << "long" << std::endl; 
	}
	
	int main() {
		short sh = 10;
		promotion(sh);
		
		return 0;
	}
