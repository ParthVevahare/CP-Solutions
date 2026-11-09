#include <iostream>
using namespace std;

int main() {
   int n;
   cin >> n;
   int x = 0;
   int y = 0;
   int z = 0;

   for (int i = 0; i < n; i++){
      int a, b, c;
      cin >> a >> b >> c;

      x = x + a;
      y = y + b;
      z = z + c;
   }

   if (x == 0 && y == 0 && z == 0){
      cout << "YES";
      return 0;
   }
   else cout << "NO";
return 0;
}