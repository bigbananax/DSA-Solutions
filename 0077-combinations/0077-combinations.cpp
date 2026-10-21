class Solution {
private:
    void solve(int i, int n, int k, vector<vector<int>>&ans){
        if(res.size()==k){
            ans.push_back(res);
            return;

        }
        if(i>n) return;
        res.push_back(i);
        solve(i+1, n, k, ans);
        res.pop_back();
        solve(i+1,n,k,ans);
    }
public:
    vector<int>res;
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        res.clear();
        solve(1,n,k,ans);
        return ans;

        
    }
};