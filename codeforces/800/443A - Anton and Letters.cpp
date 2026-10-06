#include <bits/stdc++.h>
using namespace std;


int main(){
	string k;
	getline(cin, k);

	set<char> s;

	for (char x : k){
		if (x >= 'a' && x <= 'z'){
			s.insert(x);
		}
	}	

	cout << s.size();
return 0;
}