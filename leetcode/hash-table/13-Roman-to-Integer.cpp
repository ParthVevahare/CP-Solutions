class Solution {
public:
    int romanToInt(string s) {
        int total  = 0;
        for (int i = 0; i < 15; i++){
           if (s[i] == 'I' && s[i+1] == 'V'){
            total = total + 4;
            i++;
            continue;
           }

           if (s[i] == 'I' && s[i+1] == 'X'){
            total = total + 9;
            i++;
            continue;
           }

           if (s[i] == 'X' && s[i+1] == 'L'){
            total = total + 40;
            i++;
            continue;
           }

           if (s[i] == 'X' && s[i+1] == 'C'){
            total = total + 90;
            i++;
            continue;
           }

           if (s[i] == 'C' && s[i+1] == 'D'){
            total = total + 400;
            i++;
            continue;
           }

           if (s[i] == 'C' && s[i+1] == 'M'){
            total = total + 900;
            i++;
            continue;
           }

           if (s[i] == 'I'){
           	total = total + 1;
           	continue;
           }

           if (s[i] == 'V'){
           	total = total + 5;
           	continue;
           }

           if (s[i] == 'X'){
           	total = total + 10;
           	continue;
           }

           if (s[i] == 'L'){
           	total = total + 50;
           	continue;
           }

           if (s[i] == 'C'){
           	total = total + 100;
           	continue;
           }

           if (s[i] == 'M'){
           	total = total + 1000;
           	continue;
           }

           if (s[i] == 'D'){
           	total = total + 500;
           	continue;
           }
        }

        return total;
    
    }
};