class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m =grid.size();
        int n = grid[0].size();
        vector<int>one(m,0);
        vector<int>cone(n,0);
        for(int i = 0; i<m; ++i){
            for(int j =0; j<n; ++j){
                one[i]+=grid[i][j];
                cone[j]+=grid[i][j];
            }
        }
        for(int i = 0; i<m; ++i){
            for(int j = 0; j<n; ++j){
                grid[i][j] = 2*(one[i]+cone[j])-m-n;
            }
        }
        return grid;

        
    }
};