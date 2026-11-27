class Solution {
private: 
    int solve(int i,  vector<int>&dp, vector<int>& nums , int n){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int take =  nums[i]+solve(i+2,dp,nums,n);
        int skip = solve(i+1,dp,nums,n);
        return dp[i] = max(take,skip);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp1(n+1,-1),dp2(n+1,-1);
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        int case1 = solve(0,dp1,nums,n-1);
        int case2 = solve(1,dp2,nums,n);
        return max(case1,case2);

        
    }
};