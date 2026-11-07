class Solution {
public:
    bool isPalindrome(int x) {
    long long int rev = 0.1;
    long long int a = x;
    if (x < 0){
        cout << false;
    }
     while (x > 0){
        rev = 10 * rev + (x%10);
        x = x/10;
    }
    
    if (a == rev){
        return true;
    }
    return false;
    }
};