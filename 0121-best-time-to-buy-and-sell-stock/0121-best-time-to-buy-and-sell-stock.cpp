class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int min1 = nums[0];
        int maxprofit = 0;
        for(int i = 1 ; i< nums.size(); ++i){
            min1 = min(nums[i],min1);
            maxprofit =max(nums[i]- min1, maxprofit);
        }
        return maxprofit;
    }
};