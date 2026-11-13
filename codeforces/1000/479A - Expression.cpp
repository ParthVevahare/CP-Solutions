#include <bits/stdc++.h>
using namespace std;

int main() {
   int a, b, c;
   cin >> a >> b >> c;

   int t1 = a*b*c;
   int t2 = a+b+c;
   int t3 = (a+b)*c;
   int t4 = (a*b)+c;
   int t5 = a*(b+c);
   int t6 = a+(b*c);

   int biggest = max(t1, max(t2, max(t3, max(t4, max(t5, t6)))));

   cout << biggest;
 return 0;
}