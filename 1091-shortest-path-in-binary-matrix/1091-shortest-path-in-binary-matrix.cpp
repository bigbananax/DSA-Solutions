class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int dx[8] = {-1,-1,-1,0,0,1,1,1};
        int dy[8] = {-1,0,1,-1,1,-1,0,1};
        int m = grid.size();
        int ans = 1;
        if(grid[0][0]!=0 || grid[m-1][m-1]!=0) return -1;
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0] = 1;
        while(!q.empty()){
            int n = q.size();
            while(n--){
                auto[x,y] = q.front();
                q.pop();
                if(x==m-1 && y == m-1) return ans;
                for(int i = 0;  i<8; ++i){
                    int dr = dx[i]+x;
                    int ds = dy[i]+y;
                    if(dr>=0 && ds>=0 && dr<m&& ds<m && grid[dr][ds]==0){
                        q.push({dr,ds});
                        grid[dr][ds] = 1;
                    }
                }
            }
            ans++;
        }
        return -1;
        
    }
};