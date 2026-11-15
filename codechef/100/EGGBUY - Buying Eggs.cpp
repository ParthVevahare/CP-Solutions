#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, f;
	cin >> x >> y >> f;
    
    if (12*x>=12*y+f){
        cout << y*12+f;
    }
    else cout << x*12;
}
