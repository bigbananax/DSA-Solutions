class Solution {
private: 
    long long solve(vector<vector<int>>&grid, int i, int j ){
        int m = grid.size();
        int n = grid[0].size();
        if(i<0 || i>=m ||j<0 ||j>=n||grid[i][j]==0) return false;
        long long sum = grid[i][j];
        grid[i][j] = 0; 
        sum+=solve(grid,i+1,j);
        sum+=solve(grid,i-1,j);
        sum+=solve(grid,i,j-1);
        sum+=solve(grid,i,j+1);
        return sum;

    }
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0; 
        for(int i = 0; i<m; ++i){
            for(int j = 0; j<n; ++j){
                if(grid[i][j]>0){
                    long long sum2 = solve(grid,i,j);
                    if(sum2%k==0) {
                        res++;
                    }
                }
            }
        }
        return res;

        
    }
};