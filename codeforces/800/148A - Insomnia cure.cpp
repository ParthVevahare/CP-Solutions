#include <iostream>
using namespace std;

int main() {
	int k, l, m, n, d;
   	cin >> k >> l >> m >> n >> d;
   		if(k == 1 || l == 1 || m == 1 || n == 1){
   			cout << d;
   			return 0;
   		}
   	int counter = 0;
   	
   	int arr[d];

   	for(int i = 0; i < d; i++){
   		arr[i] = i+1;
   	}

   	for(int i = 0; i < d; i++){
   		if(arr[i] != 0 && arr[i] % k == 0){
   			counter++;
   			arr[i] = 0;
   		}
   	}

   	for(int i = 0; i < d; i++){
   		if(arr[i] != 0 && arr[i] % l == 0){
   			counter++;
   			arr[i] = 0;
   		}
   	}

   	for(int i = 0; i < d; i++){
   		if(arr[i] != 0 && arr[i] % m == 0){
   			counter++;
   			arr[i] = 0;
   		}
   	}

   	for(int i = 0; i < d; i++){
   		if(arr[i] != 0 && arr[i] % n == 0){
   			counter++;
   			arr[i] = 0;
   		}
   	}

   	cout << counter;

   	
   	return 0;
}

