
	#include <iostream>
	
	using namespace std;
	
	int main() {
		/* ... */

		bool p = false;
		
		char s = '\0';
		
		while (cin.get(s)) { // на каждой итерации считываем один символ в переменную c
			
			// здесь можно пользоваться значением прочитанным в переменную c
			if(s != 1) {
				if (p == false || s != ' ') 
					cout << s;
				
				if (s == ' ') p = true;
					else if (s != ' ' ) p = false;
			}
			if (s == '\n') break; // выводим символ, если он не равен 'a'
		}
		
		return 0;
	}
