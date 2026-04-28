class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>ans;

        for(int i = 0; i<grid.size(); ++i){
            for(int j = 0; j<grid[0].size(); ++j){
                ans.push_back(grid[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        int median = ans[ans.size()/2];
        int count = 0; 
        for(int num : ans){
            int diff = abs(num-median);
            if(diff%x!=0) return -1;
            count+=diff/x;
        }
        return count;
        
    
        
    }
};