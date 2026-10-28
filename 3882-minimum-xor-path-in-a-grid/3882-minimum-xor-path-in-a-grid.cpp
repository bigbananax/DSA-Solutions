class Solution {
private:
    vector<vector<vector<int>>>dp;
    void solve(vector<vector<int>>& grid,int i, int j, int val){
        int n = grid.size();
        int m = grid[0].size();
        if(i>=n|| j>=m) return;
        val^=grid[i][j];
        if(i==n-1 && j == m-1){
            ans = min(ans,val);
            return;
        }
        if(dp[i][j][val] != -1) return;
        dp[i][j][val] = 1;

        solve(grid,i+1,j,val);
        solve(grid,i,j+1,val);
    }
public:
    int ans = INT_MAX;
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size(); 
        int n = grid[0].size();
        dp.assign(m, vector<vector<int>>(n, vector<int>(1024, -1)));
        solve(grid,0,0,0);
        return ans;
        
    }
};