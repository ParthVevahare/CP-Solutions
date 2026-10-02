#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	int a, b, c;
	

	for (int i = 0; i < t; i++){
		int counter = 0;
		cin >> a >> b;

		
			if (a%b == 0){
		     
			}
			else{
				c = a%b;
				counter = b - c;	
			}
		cout << counter << "\n";
	}
return 0;
}