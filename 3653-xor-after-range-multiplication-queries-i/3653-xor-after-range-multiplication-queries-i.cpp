class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int result = 0;
        for(int i = 0;  i<queries.size(); ++i){
            int li = queries[i][0];
            int idx = li;
            int ri = queries[i][1];
            int ki = queries[i][2];
            int v1 = queries[i][3];
            
            while(idx<=ri){
                nums[idx] = (int)( (1LL*nums[idx]*v1)%(int)( 1e9 + 7)); 
                
                idx+=ki;
                
            }
           
        }
        for(int x : nums){
            result^=x;
        }
        return result;
        
    }
};