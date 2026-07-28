class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        int sum  = 0;
        int ans  = 0;
        int curr = 0;
        for(int i = n-1; i>=0; --i){
            curr+=sum+satisfaction[i];
            sum+=satisfaction[i];
            ans=max(ans,curr);

        }
        return ans;
    }
};