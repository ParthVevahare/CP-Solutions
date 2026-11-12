#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        int counter = 0;
        cin >> n;
        string s;
        cin >> s;

        
        if (s[0] == 'B') {
            counter++;
          }

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) {
                counter++;
             }
          }
        cout << counter << endl;
    }

    return 0;
}