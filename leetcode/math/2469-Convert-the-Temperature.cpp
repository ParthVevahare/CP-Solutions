class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k, f;

        f = celsius * 1.80 + 32.00;

        k = celsius + 273.15;

        double arr[2] = {k, f};

        return {k,f};
    }
};