
	#include <iostream>
	
	struct Point {
		double x;
		double y;
		
		Point (double x = 0, double y = 0) : x(x), y(y) {	}
		
	};
	
	struct Segment {
		Point p1;
		Point p2;
		
		Segment () { }
		// ключевое слово используется для явного задания аргумента
		explicit Segment (double length) : p2(length, 0) { }
	};
	
	
	int main() {
		Point p1;
		Point p2(2, 10);
		
		std::cout << "p1.x = " << p1.x << ", p1.y = " << p1.y << '\n';
		std::cout << "p2.x = " << p2.x << ", p2.y = " << p2.y << '\n';
		
		Segment s1;
		std::cout << "s1.p1.x = " << s1.p1.x << ", s1.p1.y = " << s1.p1.y << '\n';
		std::cout << "s1.p2.x = " << s1.p2.x << ", s1.p2.y = " << s1.p2.y << '\n';
		
		Segment s2(10);
		std::cout << "s2.p1.x = " << s2.p1.x << ", s2.p1.y = " << s2.p1.y << '\n';
		std::cout << "s2.p2.x = " << s2.p2.x << ", s2.p2.y = " << s2.p2.y << '\n';
		
		Segment s3(20);
		std::cout << "s3.p1.x = " << s3.p1.x << ", s3.p1.y = " << s3.p1.y << '\n';
		std::cout << "s3.p2.x = " << s3.p2.x << ", s3.p2.y = " << s3.p2.y << '\n';
				
		return 0;
	}
	
	
		
