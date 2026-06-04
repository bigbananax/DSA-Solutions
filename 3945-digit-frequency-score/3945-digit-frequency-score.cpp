class Solution {
public:
    int digitFrequencyScore(int n) {
        string s = to_string(n);
        unordered_map<int,int>mp;
        for(auto it : s){
            mp[it-'0']++;
        }
        int k = 0;
        for(auto it : mp){
            k=k+it.first*it.second;
        }
        return k;
        
    }
};