#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	int a[t];
	int b[t];

	for (int i = 0; i < t; i++){
		cin >> a[i];
	}

	for (int i = 1; i <= t; i++){
		for (int j = 0; j < t; j++){
		if(a[j] == i){
			b[i-1] = j+1;
		}
	}
}
 for(int i = 0; i < t; i++){
    cout << b[i] << " ";
}




return 0;
}