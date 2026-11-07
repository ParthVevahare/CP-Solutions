#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin >> t;
    
    
	while (t--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    int big;
	    int second;
	    big = max(max(a, b),c);
	   if (big == a)
        second = max(b, c);
    else if (big == b)
        second = max(a, c);
    else
        second = max(a, b);
        
        cout << second << endl;
	       
	   }
	}


