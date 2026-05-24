class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;

        for(auto it : nums){
            if(mp[it] < k){
                ans.push_back(it);
                mp[it]++;
            }
        }

        return ans;
    }
};