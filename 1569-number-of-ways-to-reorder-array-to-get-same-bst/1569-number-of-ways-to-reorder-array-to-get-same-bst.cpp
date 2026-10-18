
class Solution {
public:
    static const int MOD = 1e9 + 7;
    long long factorial(int n) {
        long long fact = 1;
        for (int i = 2; i <= n; i++) {
            fact = fact * i % MOD;
        }
        return fact;
    }
    long long modPow(long long a, long long b) {
        long long res = 1;
        while (b > 0) {
            if (b & 1) res = res * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return res;
    }
    long long nCr(int n, int r) {
        if (r < 0 || r > n) return 0;

        long long numerator = factorial(n);
        long long denominator = factorial(r) * factorial(n - r) % MOD;

        return numerator * modPow(denominator, MOD - 2) % MOD;
    }

    long long solve(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return 1;

        vector<int> left, right;

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[0])
                left.push_back(nums[i]);
            else
                right.push_back(nums[i]);
        }

        long long ways = nCr(n - 1, left.size());
        ways = ways * solve(left) % MOD;
        ways = ways * solve(right) % MOD;

        return ways;
    }

    int numOfWays(vector<int>& nums) {
        return (solve(nums) - 1 + MOD) % MOD;
    }
};
