	
	#include <iostream>
	
	char *resize(const char *str, unsigned size, unsigned new_size) {
		
		unsigned effectivesize = (size < new_size) ? size : new_size;
		
		char *m = new char [effectivesize];
		for (unsigned i = 0; i < effectivesize; ++i) {  
		  m[i] = str[i];
		}
		delete [] str;
		return m;
	}


	int main() {
		
		unsigned bsize = 10;
		char *s = new char [bsize];
		
		unsigned esize = 50;
		
		char *es = resize(s, bsize, esize);
		
		std::cout << es;
		
		std::cout << 1 << '\n';
		return 0;
	}

/* #include <cstring>


char *resize(const char *str, unsigned size, unsigned new_size);

char *resize(const char *str, unsigned size, unsigned new_size)
{
    char *newstr = new char[new_size];
    unsigned effectivesize = (size < new_size) ? size : new_size;

    memcpy(newstr, str, effectivesize);
    delete [] str;

    return newstr;
}

*/



