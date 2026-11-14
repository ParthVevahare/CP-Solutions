#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, k, l, c, d, p, nl, np;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np;

   int drink, lime, salt;

   lime = c*d;

   drink = k*l/nl;

   salt = p/np;

   int total = (min(lime, min(salt, drink)))/n;
   cout << total;
return 0;
}