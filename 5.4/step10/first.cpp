	#include <iostream>
	#include "foo.hpp"
	#include "second.cpp"
	#include "third.cpp"

	using namespace std;

	int main() {
		//cout << "Hello world!" << endl;
		foo(3);
		second();
		third();
		return 0;
	}
