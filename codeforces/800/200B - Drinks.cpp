#include <bits/stdc++.h>
using namespace std;


int main(){
	long double t;
	cin >> t;
	long double a;
	long double total = 0;
	long double average;

 for (int i = 0; i < t; i++){
	cin >> a;
	total = total + a;
	}

average = total/t;

cout << average;
	 


return 0;
}