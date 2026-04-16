class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        unordered_map<int,int>mp;
        vector<int>ans2(n,INT_MAX);
        for(int i = 0; i<2*n; i++){
            int ans = nums[i%n];
            if(mp.count(ans)){
                int res = mp[ans];
                int diff = i-res;
                int distance = min(diff,n-diff);
                if(distance!=0){
                    ans2[i%n] = min(ans2[i%n],diff);
                    ans2[res%n] = min(ans2[res%n],distance);


                }
            }
            mp[ans] = i;
        }
        vector<int> ans3;
        for(int x : queries){
            if(ans2[x]==INT_MAX) ans3.push_back(-1);
            else ans3.push_back(ans2[x]);
        }
        return ans3;
    }
};