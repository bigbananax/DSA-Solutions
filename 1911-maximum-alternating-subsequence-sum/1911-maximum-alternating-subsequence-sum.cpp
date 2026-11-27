class Solution {
private: 
    long long solve(int i, vector<int>&nums, vector<vector<long long>>& dp, bool odd){
        int n = nums.size();
        if(i>=n) return 0;
        if(dp[i][odd]!=-1) return dp[i][odd];
        long long skip = solve(i+1, nums,dp, odd);
        int val = nums[i];
        if(odd==false){
            val = -val;

        }
        long long  take = solve(i+1, nums, dp ,!odd)+val;
        return dp[i][odd]=max(skip,take);
    }
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<long long>> dp (n+1,vector<long long>(2,-1));
        return solve(0,nums,dp,true);
        
    }
};