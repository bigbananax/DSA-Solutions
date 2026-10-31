class Solution {
private:
    int solve(vector<vector<int>>&grid, int i,  int j){
        int m = grid.size();
        int n = grid[0].size();

        int sum = 0; 


        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0){
            return 0; 

        }

        int gold = grid[i][j];

        grid[i][j] = 0; 


        int up = solve(grid, i+1, j);
        int down = solve(grid,i-1,j);
        int left = solve(grid,i, j+1);
        int right = solve(grid,i,j-1);

        grid[i][j] = gold;

        return gold+max({up,left,down,right});



    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans = 0; 
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i<n; ++i){
            for(int j= 0; j<m; ++j){
                if(grid[i][j]!=0){
                    ans = max(ans, solve(grid,i ,j ));
                }
            }
        }
        return ans;

    }
};