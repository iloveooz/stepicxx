
	#include <iostream>
	#include <cmath>
	
	struct Point {
		double x; 
		double y;
		
		void shift(double x, double y);
	};

	// внешнее определение метода
	void Point::shift(double x, double y) {
			this->x += x;
			this->y += y;
		}


	struct Segment {
		Point p1;
		Point p2;
		
		double length() {
			double dx = p1.x - p2.x;
			double dy = p1.y - p2.y;
			return sqrt(dx * dx + dy * dy);
		}
	};
	
	int main() {
		Segment S = {{ 0.4, 1.4 }, { 1.2, 6.3 }};
		std::cout << S.length() << '\n';
		
		// S.shift(2.0, 4.5);
		std::cout << S.length() << '\n';
		
		return 0;
	}
		
