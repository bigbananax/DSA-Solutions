class Solution {
public:
    int solve(int i , vector<int>&dp){
        if(i<=0) return 0;
        if(i==1) return 1;
        if(dp[i]!=-1) return dp[i];
        dp[i] = solve(i-2,dp)+solve(i-1,dp);
        return dp[i];
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);

        
    }
};