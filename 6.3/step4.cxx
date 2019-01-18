
	#include <iostream>
	
	class T;
	class V;
	
	template <class T>
	void foo(T a, T b) {
		std::cout << "same types" << '\n';
	}
	
	template <class T, class V>
	void foo(T a, V b) {
		std::cout << "different types" << '\n';
	}
	
	template <>
	void foo <int, int>	(int a, int b) {
		std::cout << "both parametres are int" << '\n';
	}
	
	int main() {
		foo(3, 'f');
		return 0;
	}
