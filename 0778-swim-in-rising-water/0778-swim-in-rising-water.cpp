class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq;
        vector<vector<int>>visit(n,vector<int>(n,0));
        pq.push({grid[0][0],{0,0}});
        int dx[] = {-1,0,1,0};
        int dy[] = {0,-1,0,1};
        while(!pq.empty()){
            auto it = pq.top();
            int height = it.first;
            int xe = it.second.first;
            int ye = it.second.second;
            pq.pop();
            if(visit[xe][ye]) continue;
            visit[xe][ye] = 1;
            if(xe==n-1 && ye == n-1) return height;
            for(int i = 0; i<4; ++i){
                int newx = xe+dx[i];
                int newy = ye+dy[i];
                if(newx>=0&&newy>=0&&newx<n&&newy<n && !visit[newx][newy]){
                    pq.push({max(height,grid[newx][newy]),{newx,newy}});
                }


            }
        }
        return ans;
        
    }
};