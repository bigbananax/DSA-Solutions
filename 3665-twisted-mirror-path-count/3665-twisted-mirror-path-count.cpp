class Solution {
    int count = 0;
    int mode = 1e9 + 7;
    vector<vector<vector<int>>>dp;

private:
    int solve(vector<vector<int>>& grid, int i, int j, int prev) {
        int n = grid.size();
        int m = grid[0].size();
        if (i >= n || j >= m) return 0;
        if (i == n-1 && j == m - 1) {
            return 1;
        }
        if(dp[i][j][prev]!=-1) return dp[i][j][prev];
        long long ans = 0; 

        if (grid[i][j] == 0) {
            ans+=solve(grid, i, j + 1, 0); 
            ans+=solve(grid, i + 1, j, 1);
        }
        else {
            if (prev == 0) {
                ans = solve(grid, i + 1, j, 1);
            }
            else {
                ans = solve(grid, i, j + 1, 0);
            }
        }
        return dp[i][j][prev] = ans%mode;
    }

public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        count = 0;
        dp.assign(m,vector<vector<int>>(n, vector<int>(2,-1)));

        if(grid[0][0]==1) return 0;

        return (solve(grid,0,1,0)+solve(grid,1,0,1))%mode;
    }
};