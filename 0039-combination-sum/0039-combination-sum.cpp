class Solution {
     vector<int>res;
private: 
    void func(int i, int target, vector<int>&candidates,vector<vector<int>>&ans,int n){
        if(target==0){
            ans.push_back(res);
            return;

        }
        if(i==n || target<0) return;
        res.push_back(candidates[i]);
        func(i, target-candidates[i],candidates,ans,n);
        res.pop_back();
        func(i+1,target,candidates,ans,n);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>>ans;
        func(0,target,candidates,ans,n);
        return ans;

        
    }
};