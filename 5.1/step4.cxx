	#include <iostream>
	
	class Vector {
	public:
		double x;
		double y;
		
		Vector(double xi, double yi) : x(xi), y(yi) {}
		
		Vector() {
			x = 0.0;
			y = 0.0;
		}
		
		// Vector operator - () const {
		// 	return Vector(-x, -y);
		// }
		
		// бинарный минус
		Vector operator - (Vector const &p) {
			return Vector(x - p.x, y - p.y);
		}
		
		Vector & operator *= (double d) {
			x *= d;
			y *= d;
			return *this;
		}
		
		// опеатор квадратные скобки (доступ по индексу)
		double operator [] (size_t i) const {
			return (i == 0) ? x : y;
		}
		
		// инкремент (префикс)
		Vector & operator ++ () {
			++this->x;
			++this->y;
			return *this;
		}

		// декремент (префикс)
		Vector & operator -- () {
			--this->x;
			--this->y;
			return *this;
		}

		// инкремент (постфикс)
		Vector operator ++ (int) {
			Vector tmp(*this);
			++(*this);
			return tmp;
		}

		// декремент (постфикс)
		Vector operator -- (int) {
			Vector tmp(*this);
			--(*this);
			return tmp;
		}
		
	};
	
	// унарный минус
	Vector operator - (Vector const & v) {
		return Vector(-v.x, -v.y);
	}
	
	// бинарный плюс
	Vector operator + (Vector const &v, Vector const &w) {
		return Vector(v.x + w.x, v.y + w.y);
	}
	
	// умножение векторa на число
	Vector operator * (Vector const &v, double d) {
		return Vector(v.x *d, v.y * d);
	}
	
	// умножение вектора на число
	Vector operator * (double d, Vector const &v) {
		return Vector(v * d); // используем перегруженный оператор выше
	}
	
	int main () {
		
		Vector A(5.0, 5.0);
		Vector B;
		
		B = -A;
		
		B = B * 4;
		
		Vector C = B + A;
		
		C *= 4;
		
		B = C - B;
		
		C = A + B;
		
		C = ++A;
		C = --A;
		C = A--;
		
		std::cout << "Vector A: A.x = " << A.x << ", A.y = " << A.y << '\n';
		std::cout << "Vector B: B.x = " << B.x << ", B.y = " << B.y << '\n';
		// std::cout << "Vector C: C.x = " << C.x << ", C.y = " << C.y << '\n';
		std::cout << "Vector C: C.x = " << C[0] << ", C.y = " << C[1] << '\n';
		
		return 0;
	}
