#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int notes = 0;

    while (n > 0) {
        if (n >= 100) {
            n -= 100;
            notes++;
        }
        else if (n >= 20) {
            n -= 20;
            notes++;
        }
        else if (n >= 10) {
            n -= 10;
            notes++;
        }
        else if (n >= 5) {
            n -= 5;
            notes++;
        }
        else {
            n -= 1;
            notes++;
        }
    }

    cout << notes;

    return 0;
}