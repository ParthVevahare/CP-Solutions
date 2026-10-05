#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	int min = 101;
	int max = 0;
	int a = 0;
	int b = 0;
	int counter = 0;

	int arr[n];

	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++){
		if (arr[i] > max){
			max = arr[i];
			a = i;
		}
	}

	for (int j = 0; j < n; j++){
		if (arr[j] <= min){
			min = arr[j];
			b = j;
		}	
	}

	

	for (int k = 0; k < n; k++){
		if (0 != a){
			swap(arr[a], arr[a-1]);
			a = a-1;
			counter = counter + 1;
			if (a == b){
            b++;
        	}
		}

		


	}

	for (int k = 0; k < n; k++){
		if (n-1 != b){
			swap(arr[b], arr[b+1]);
			b = b+1;
			counter = counter + 1;
		}

		
	}

	cout << counter;

return 0;
}