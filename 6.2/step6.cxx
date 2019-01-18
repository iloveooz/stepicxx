	#include <iostream>

	struct Less { 
	  bool operator()(int a, int b) const { return a < b; } 
	};

	bool less(int a, int b) { return a < b; }

	int main()
	{
	  Less less;

	  if (less(10, 20)) 
		std::cout << "10 < 20" << std::endl;
	  else 
		std::cout << "10 >= 20" << std::endl;

	  if (::less(10, 20)) 
		std::cout << "10 < 20!" << std::endl;
	  else 
		std::cout << "10 >= 20!" << std::endl;

	  return 0;
	}
