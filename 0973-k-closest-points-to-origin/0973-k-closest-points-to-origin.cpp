class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;
        vector<vector<int>>ans;
        for(int i = 0; i<points.size(); ++i){
            int x = points[i][0];
            int y = points[i][1];
            int d = x*x+y*y;
            if(pq.size()<k){
                pq.push({d,i});
            }
            else{
                pq.push({d,i});
                pq.pop();
            }


        }
        while(!pq.empty()){
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }
        return ans;
        
        
    }
};