
	#include <iostream>
	
	struct Point {
		double x;
		double y;
		
		Point (double x = 0, double y = 0) : x(x), y(y) {	}
		
	};
	
	int main() {
		Point p1;
		Point p2(2, 10);
		
		std::cout << "p1.x = " << p1.x << ", p1.y = " << p1.y << '\n';
		std::cout << "p2.x = " << p2.x << ", p2.y = " << p2.y << '\n';
		
		return 0;
	}
	
	
		
