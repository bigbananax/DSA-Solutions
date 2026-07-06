class Solution {
public:
    int maxDigitRange(vector<int>& nums) 
    {
        vector<vector<int>>arr(10);
        int m = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int maxi = INT_MIN;
            int mini = INT_MAX;
            int n  = nums[i];
            while(n>0)
            {
                int d = n%10;
                maxi = max(maxi,d);
                mini = min(mini,d);
                n=n/10;
            }
            int r = maxi - mini;
            m = max(m,r);
            arr[r].push_back(nums[i]);
        }
        int ans = 0;
        for(int i=0;i<arr[m].size();i++)
        {
            ans+=arr[m][i];
        } 
        return ans;
    }
};