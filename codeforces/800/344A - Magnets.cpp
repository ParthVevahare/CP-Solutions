#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	int counter = 1;
	int a[t];
	for (int i = 0; i < t; i++){
		cin >> a[i];
	}

	for (int i = 1; i < t; i++){
		
			if (a[i] != a[i-1]){
				counter = counter + 1;
				
			
			} 
	}

	cout << counter;
return 0;
}