class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = INT_MAX;
        for(int n:nums) m=min(m,n);
        int ans;
        for(int n:nums) ans=ans+n-m;
        return ans;

        
    }
};