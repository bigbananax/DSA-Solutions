class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>ans;
        for(int i = 0; i<nums1.size(); ++i){
            ans.push_back({nums2[i],nums1[i]});
        }
        sort(ans.rbegin(),ans.rend());
        long long a = 0; 
        long long sum = 0; 
        priority_queue<int>pq;
        for(int i = 0; i<k-1; ++i){
            sum+=ans[i].second;
            pq.push(-ans[i].second);
        }
        for(int i = k-1; i<nums1.size(); ++i){
            sum+=ans[i].second;
            pq.push(-ans[i].second);
            a =max(a,sum*ans[i].first);
            sum+=pq.top();
            pq.pop();
            
        }
        return a;
        
    }
};