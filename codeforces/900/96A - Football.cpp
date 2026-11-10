#include <iostream>
using namespace std;

int main() {
   string s;
   cin >> s;
   int counter = 0;

   for (int i = 0; i+1 < s.length(); i++){
      if (s[i] == s[i+1]){
         counter++;
      }
      else counter = 0;

      if (counter == 6){
         cout << "YES";
         return 0;
      }
      
   }
   cout << "NO";
return 0;
}
