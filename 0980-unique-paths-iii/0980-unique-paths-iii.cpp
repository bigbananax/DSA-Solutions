class Solution {
private: 
    int res = 0; 
    void solve(vector<vector<int>>&grid, int count , int i, int j ,int obs){
        int n = grid.size();
        int m = grid[0].size();
        if(i>=n ||j>=m||i<0||j<0||grid[i][j]==-1) return;
        if(grid[i][j]==2){
            if(count==obs){
                res++;
                return;
            }
        }
        int temp = grid[i][j];
        grid[i][j]=-1;
        solve(grid,count+1,i-1,j,obs);
        solve(grid,count+1,i,j-1,obs);
        solve(grid,count+1,i+1,j,obs);
        solve(grid,count+1,i,j+1,obs);

        grid[i][j] = temp;

    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int obs = 0; 
        int idx(-1),idy(-1);
        for(int i = 0; i<n; ++i){
            for(int j = 0; j<m; ++j){
                if(grid[i][j]==1){
                    idx = i;
                    idy = j;
                }
                if(grid[i][j]==0){
                    obs++;

                }
            }
        }
        obs = obs+1;
        int count = 0; 
        solve(grid, count, idx,idy,obs);
        return res;
        

        

        
    }
};