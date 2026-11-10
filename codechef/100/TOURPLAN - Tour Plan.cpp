#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	
	if (z<50){
	    cout << x;
	}
	else cout << x + y*(z-50);
}
