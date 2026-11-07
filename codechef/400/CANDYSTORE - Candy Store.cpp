#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        
        int total;
        int a = 0;
        int b = 0;
        
        if (y <= x){
            a = y;
            b = 0;
        }
        if (y > x){
            a = x;
            b = (y - x)*2;
        }
        
        total = a + b;
        cout << total << endl;
    }
	

}
