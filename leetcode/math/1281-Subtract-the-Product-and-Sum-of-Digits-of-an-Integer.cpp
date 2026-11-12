
class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n;
        int count = 0;

        while (temp > 0) {
            count++;
            temp = temp / 10;
        }

        int arr[count];

        for (int i = 0; i < count; i++){
            arr[i] = n % 10;
            n = n / 10;
        }
        
        int product = 1;
        for (int i = 0; i < count; i++){
            product = product * arr[i];
        }

        int sum = 0;
        for (int i = 0; i < count; i++){
            sum = sum + arr[i];
        }

        int total;
        total = product - sum;

        return total;
    }
};
