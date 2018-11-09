
	#include <iostream>

	// определите только функцию power, где
	//    x - число, которое нужно возвести в степень
	//    p - степень, в которую нужно возвести x

	int power(int x, unsigned p) {
		int answer = 1;
		
		for (int i = 1; i <= p; i++) 
			answer *= x;

		/* считаем answer */

		return answer;
	}


	int main() {
		int p = 4;
		int x = 7;
		
		int result = 0;
		
		result = power(x, p);
		
		std::cout << "result = " << result << std::endl;
		return 0;
	}
