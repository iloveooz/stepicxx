	#include <iostream>
	using namespace std;

	int main() {  
		int t = 0;
		int a[10];
		int b[10];
		
		cin >> t;
		
		for (int i = 0; i < t; i++) {
			cin >> a[i] >> b[i]; 
			cout << (a[i] + b[i]) << endl;
		}
		// put your code here

		return 0;
	}

        // int a, b; cin >> a;                                                                     
        // while(cin >> a >> b) cout << a + b << endl;                                    
        // return 0;  
