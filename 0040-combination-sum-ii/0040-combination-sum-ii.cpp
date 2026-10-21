class Solution {
private:
    void solve(int i, int target, vector<int>&candidates, vector<vector<int>>&ans, int n){
        if(target == 0){
            ans.push_back(res);
            return;
        }
        if(i==n || target<0) return;
        res.push_back(candidates[i]);
        solve(i+1,target-candidates[i],candidates,ans,n);
        res.pop_back();
        int j = i+1;
        while(j<n && candidates[j]==candidates[i]){
            j++;
        }
        solve(j,target,candidates,ans,n);
    }
public:
    vector<int>res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int n = candidates.size(); 
        vector<vector<int>>ans;
        solve(0, target, candidates, ans,n);
        return ans;

        
    }
};