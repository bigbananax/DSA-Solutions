class Solution {
public:
    int solve(int i, vector<int>&nums, int trget){
        if(i == nums.size()){
            return trget == 0;
        }
        return solve(i+1,nums,trget+nums[i])+solve(i+1,nums,trget-nums[i]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(0,nums,target);
        
    }
};