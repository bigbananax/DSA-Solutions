class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum1 = 0, sum2 = 0;
        while(n) {
            int d = n % 10;
            sum1 += d;
            sum2 += d * d;
            n /= 10;
        }
        return sum2 - sum1 >= 50;
    }
};