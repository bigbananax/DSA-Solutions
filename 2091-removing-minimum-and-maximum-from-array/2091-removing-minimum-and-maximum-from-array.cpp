class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mai1 = *max_element(nums.begin(),nums.end());
        int mini1 = *min_element(nums.begin(),nums.end());
        int n = nums.size();
        int a ,b;
        for(int i = 0; i<n; ++i){
            if(nums[i]==mai1){
                a=i;
            }
            if(nums[i]==mini1){
                b=i;
            }
        }
        int left = min(a, b);
        int right = max(a, b);
        int k1 = right + 1;         
        int k2 = n - left;      
        int k3 = (left + 1) + (n - right);
        return min({k1, k2, k3});
    }
};