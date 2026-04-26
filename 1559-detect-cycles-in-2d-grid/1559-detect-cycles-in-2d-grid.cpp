#include <bits/stdc++.h>
using namespace std;
//using pr and pc for parent tracking and then same dfs

class Solution {
public:
    bool dfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& vis, int pr, int pc) {
        vis[row][col] = 1;
        
        int dir[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        
        for(int i = 0; i < 4; ++i) {
            int nRow = row + dir[i][0];
            int nCol = col + dir[i][1];
            
            if(nRow >= 0 && nRow < grid.size() && nCol >= 0 && nCol < grid[0].size()
               && grid[nRow][nCol] == grid[row][col]) {
                
                if(nRow == pr && nCol == pc) continue;
                
                if(vis[nRow][nCol]) return true;
                
                if(dfs(nRow, nCol, grid, vis, row, col)) return true;
            }
        }
        return false;
    }
    
    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                if(!vis[i][j]) {
                    if(dfs(i, j, grid, vis, -1, -1)) return true;
                }
            }
        }
        return false;
    }
};