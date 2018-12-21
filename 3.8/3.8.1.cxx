	#include <iostream>

	struct A {
		int l;
		
		int & get() {
			std::cout << "&&&&&&&&&" << std::endl;
			return l;
		}
		
		int get() const {
			std::cout << "ccccccccccc" << std::endl;
			return l;
		}
	};

	int main(int argc, char** argv) {
		A a;
		a.l = 10;
		a.get() = 20;
		std::cout<< a.get();
		
		A const & la = a;
		la.get();
		return 0;
	}
