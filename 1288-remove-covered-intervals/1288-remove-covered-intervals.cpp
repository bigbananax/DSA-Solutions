class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int> &a,vector<int> &b){
            if(a[0]==b[0])
            return a[1]>b[1];
            return a[0]<b[0];
        });
        int n=intervals.size();
        int mexi=-1; 
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(intervals[i][1]>mexi){
            ans++;
            mexi=intervals[i][1];
            }
           
        }
        return ans;
        
    }
};