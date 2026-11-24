class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 2; 
        int left = 0;
        int prod = 1;
        for(int i = 0; i<nums.size(); ++i){
            int x = nums[i];
            while(gcd(prod,x)>1){
                prod/=nums[left++];

            }
            prod *=x;
            ans = max(ans,i-left+1);
        }
        return ans;
        
    }
};