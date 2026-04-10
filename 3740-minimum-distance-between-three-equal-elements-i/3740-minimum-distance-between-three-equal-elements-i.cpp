class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size()-1;
       
        int ans = INT_MAX;
        for(int i = 0;  i<=n-1; ++i){
            for(int j = i+1; j<=n-1; ++j){
                for(int k = j+1; k<=n; ++k){
                    if(nums[i]==nums[j]&&nums[j]==nums[k]){
                        ans = min(ans,2*(k-i));
                        
                    }
                }
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
       
        
    }
};