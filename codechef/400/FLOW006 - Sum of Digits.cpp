#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int total = 0;
	    int a;
	    
	    cin >> a;
	    
	    while (a > 0){
	        total = total + a % 10;
	        a = a/10;
	        
	    }
	    
	    cout << total << endl;
	}

}
