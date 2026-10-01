#include <bits/stdc++.h>
using namespace std;


int main(){
 	long long int n;
 	long long int a;
 	cin >> n;
 	
 	if (n % 2 == 0){
 		a = n/2;
 	}

 	else {
 		a = n/2 - n;
 	}

 	cout << a;

return 0;
}