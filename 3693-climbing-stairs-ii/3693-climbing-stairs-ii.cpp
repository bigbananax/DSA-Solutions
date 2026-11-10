class Solution {
private:
    int solve(vector<int>& costs, vector<int>& dp, int n, int i) {
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];
        int ans = INT_MAX;
        for(int j = 1; j <= 3; j++){
            if(i+j <= n){
                int cost = j*j+costs[i+j-1]+solve(costs, dp, n, i+j);
                ans = min(ans, cost);
            }
        }
        return dp[i] = ans;
    }

public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1, -1);
        return solve(costs, dp, n, 0);
    }
};