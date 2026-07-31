class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        for(char c : word){
            mp[c]++;
        }
        vector<int>ans;
        for(auto& it : mp){
            ans.push_back(it.second);
        }
        sort(ans.rbegin(),ans.rend());
        int maxi = 0;
        int count = 0;
        for(int x : ans){
            int l = (count/8)+1;
            maxi+=l*x;
            count++;
        }
        return maxi;

        
    }
};