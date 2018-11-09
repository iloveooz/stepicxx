
	#include <iostream>
	#include <vector>
	
	int main() {
		
		// количество тестов
		int T = 0;
		int j = 0;
		
		double o = 2.0;
				
		std::cin >> T;
		
		std::vector <double> seq(T);
		std::vector <double> ans(T);
		
		for (int i = 0; i < T; i++) {
			j = 0;
			std::cin >> seq[i];
			while (seq[i] >= o) {
				seq[i] = seq[i] / o;
				j++;
			}
			ans[i] = j;
		}
		
		for (int i = 0; i < T; i++) std::cout << ans[i] << '\n';
		
		return 0;
	}
	
/*	
#include <iostream>

int log(int a)
{    
    int val = 2,
        p   = 1;
    
    for (; val <= a; ++p) 
        val <<= 1;
    
    return --p;
}

int main()
{
    int t, a;
    std::cin >> t;
    while (t --)
    {
        std::cin >> a;
        std::cout << log(a) << std::endl;
    }
    
    return 0;
}

*/
