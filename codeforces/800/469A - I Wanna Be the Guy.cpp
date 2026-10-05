#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;

	int total = 0;

	int A;
	cin >> A;
	int a[A];

	for (int i = 0; i < A; i++){
		cin >> a[i];
	}

	int B;
	cin >> B;
	int b[B];

	for (int i = 0; i < B; i++){
		cin >> b[i];
	}

	bool arr[n] = {};

	for (int i = 1; i <= n; i++){
		for (int j = 0; j < A; j++){
			if (a[j] == i){
				arr[i-1] = 1;
			}
		}

		for (int k = 0; k < B; k++){
			if (b[k] == i){
				arr[i-1] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++){
		total = total + arr[i];
	}

	if (total == n){
		cout << "I become the guy.";
	}

	else {
		cout << "Oh, my keyboard!";
	}


return 0;
}