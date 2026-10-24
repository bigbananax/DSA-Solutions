class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int ans = nums[0]; 
        for(int i = 1; i<nums.size(); ++i){
            ans = gcd(nums[i],ans);

        }
        if(ans==1) return true;
        return false;
        
    }
};