class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i = 0; i<nums.size(); ++i){
            mp[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        for(auto &it : mp){
            vector<int>v = it.second;
            if(v.size()>=3){
                int n = v.size()-1;
                for(int i = 0; i<n-1; ++i){
                    ans = min(ans,(2*(v[i+2]-v[i])));
                }
            }
        }
        if(ans==INT_MAX) return -1;
        else return ans;
        
    }
};