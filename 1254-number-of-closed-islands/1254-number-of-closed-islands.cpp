class Solution {
private:
    bool solve(vector<vector<int>>&grid, int i, int j){
        int n = grid.size(); 
        int m = grid[0].size();
        if(i<0 || i>=n ||j<0 || j>=m){
            return false;
        }

        if (grid[i][j]==1) return true;
        grid[i][j]= 1;
        return solve(grid,i+1,j)&solve(grid,i-1,j)&solve(grid,i,j-1)&solve(grid,i,j+1);
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int m  = grid.size(); 
        int n = grid[0].size();
        for(int i = 0; i<m; ++i){
            for(int j = 0; j<n; ++j){
                if(!grid[i][j]){
                    ans+=solve(grid,i,j);
                }
            }
        }
        return ans;
    }
};