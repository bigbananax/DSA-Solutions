class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int max1 = *max_element(nums.begin(),nums.end());
        int min1 = *min_element(nums.begin(),nums.end());
        return 1l*k*(max1-min1);
    
        
    }
};