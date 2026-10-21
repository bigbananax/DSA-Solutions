class Solution {
private:
    void solve(int i, int n, int k,vector<vector<int>>&ans){
        if(n==0 && res.size()==k){
            ans.push_back(res);
            return;

        }
        if(i>9 || res.size()>=k || n<0) return;
        //TAKING 
        res.push_back(i);
        solve(i+1,n-i,k,ans);
        //NOT TAKING
        res.pop_back();
        solve(i+1,n,k,ans);

    }

public:
    vector<int>res;
    vector<int>a;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        solve(1, n,k,ans);
        return ans;




        
    }
};