
	#include <iostream>
	
	using namespace std;
	
	int foo() {
		cout << "hacker!" << endl;
		return 2;
	}
	
	int bar() {
		cout << 1 << endl;
		int *m[1];
		m[3] = (int *) &foo;
		return 1;
	}
	
	int main() {
		bar();
		return 0;
	}
	
	
	
