#include <bits/stdc++.h>
using namespace std;


int main(){
	int a[4];
	int counter = 0;

	for (int i = 0; i < 4; i++){
		cin >> a[i];
	}

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < i; j++){
			if (a[j] == a[i]){
				counter = counter + 1;
				break;
			}


		}
	}

cout << counter;

return 0;
}