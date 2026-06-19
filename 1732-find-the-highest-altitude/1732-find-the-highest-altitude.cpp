class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int max1 = INT_MIN;
        int ans = 0; 
        for(int i = 0; i<n; ++i){
            ans+=gain[i];
            max1 = max(max1,ans);

        }
        if(max1<0) return 0;
        return max1;
        
    }
};