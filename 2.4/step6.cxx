
	#include <iostream>

	unsigned strlen (const char *str) {
		
		int len = 0;
		const char *b = str;
		
		for (; *b != '\0'; ++b) 
			len++;
		
		return len;
	}
	
	
	int main() {
		char string[] = "principal";
		int length = 0;
		
		length = strlen(string);

		std::cout << "Длина: " << length << std::endl;
		
		length = strlen(string);

		std::cout << "Длина: " << length << std::endl;
	}


/*
 * 
 * unsigned strlen(const char *str)
{
    unsigned cnt = 0;
    while(*(str + cnt) != 0) ++cnt;
 
    return cnt;
}
* 
*/



