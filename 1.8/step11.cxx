
	#include <iostream>
	#include <cmath>
	
	// using namespace std;

	int main() {
		// значения коэффициентов
		int a = 0, b = 0, c = 0;

		// корни уравнения
		double x1 = 0.0, x2 = 0.0;
		
		// ввод коэффициентов
		std::cin >> a >> b >> c;
		
		// дискриминант
		
		double d = b * b - 4 * a * c;
		
		// std::cout << d << '\n';
		
		if (d < 0.0) {
			std::cout << "No real roots" << '\n';
		}
		
		if (d == 0.0) {
			x1 = (double)-b / (2 * a);
			std::cout << x1 << ' ' << x1 << '\n';
		}
		
		if (d > 0.0) {
			x1 = (double)(-b + sqrt(d)) / (2 * a);
			x2 = (double)(-b - sqrt(d)) / (2 * a);
			
			std::cout << x1 << ' ' << x2 << '\n';
		}

		return 0;
	}
