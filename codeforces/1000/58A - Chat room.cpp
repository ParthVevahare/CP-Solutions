#include <iostream>
using namespace std;

int main() {
   string s;
   cin >> s;
   int counter = 0;
   int j;
   int j1;
   int j2;
   int j3;
   

   for (int i = 0; i < s.length(); i++){
      if (s[i] == 'h'){
         counter++;
         j = i+1;
         break;
      }
   }

   for (j; j < s.length(); j++){
      if (s[j] == 'e'){
         counter++;
         j1 = j+1;
         break;
      }
   }

   for (j1; j1 < s.length(); j1++){
      if (s[j1] == 'l'){
         counter++;
         j2 = j1+1;
         break;
      }
   }

   for (j2; j2 < s.length(); j2++){
      if (s[j2] == 'l'){
         counter++;
         j3 = j2+1;
         break;
      }
   }

   for (j3; j3 < s.length(); j3++){
      if (s[j3] == 'o'){
         counter++;
         
         break;
      }
   }

   if (counter == 5){
      cout << "YES";
   }

   else cout << "NO";

return 0;
}

