
	#include <iostream>

	char *getline() {
		char * m = new char[1000000];
		int i = 0;
		char c;
		
		while((std::cin.get(c)) && (c != '\n') && (c != '\0')) {
			m[i] = c;
			i++;
		}
		
		m[i] = '\0';
		return m;
	} 

	int main() {
		std::cout << getline() << std::endl;
		return 0;
	}
