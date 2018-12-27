
	#include <iostream>
	
	struct Vector2d {
		Vector2d (double x, double y) : x(x), y(y) { }
		
		Vector2d mult (double d) const {
			return Vector2d(x * d, y * d);
		}
		
		double mult (Vector2d const & p) const {
			return x * p.x + y * p.y;
		}
		
		double x, y;
	};
	
	int main() {
		
		Vector2d p(1, 2);
		std::cout << "p.x = " << p.x << ", p.y = " << p.y << std::endl;
		
		Vector2d q = p.mult(10);
		std::cout << "q.x = " << q.x << ", q.y = " << q.y << std::endl;
		
		double r = p.mult(q);
		std::cout << "r = " << r << std::endl;
		
		return 0;
	}
