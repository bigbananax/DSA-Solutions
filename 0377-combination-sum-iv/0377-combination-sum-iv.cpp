class Solution {
private:
    int solve(vector<int>& nums, int target, int sum,vector<int>& dp) {

        if(sum == target) return 1;

        if(sum > target) return 0;

        if(dp[sum] != -1) return dp[sum];

        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            ans += solve(nums, target, sum + nums[i], dp);
        }

        return dp[sum] = ans;
    }

public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, -1);

        return solve(nums, target, 0, dp);
    }
};