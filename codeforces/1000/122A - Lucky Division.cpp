#include <iostream>
using namespace std;

int main() {
   int n;
   cin >> n;

   //Lucky numbers = 4, 7, 47, 74, 477, 474, 447, 777, 444, 774, 747, 744;

   if (n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74 == 0 || n%477 == 0 || n%474 == 0 || n%447 == 0 || n%777 == 0 || n%444 == 0 || n%774 == 0 || n%747 == 0 || n%744 == 0){
      cout << "YES";
   }
   else cout << "NO";

return 0;
}