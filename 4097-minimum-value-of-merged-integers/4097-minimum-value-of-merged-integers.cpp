class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        vector<string>ans;
        for(int i = 0; i<nums.size()-1; i+=2){
            ans.push_back(to_string(nums[i])+to_string(nums[i+1]));
            
        }
        for(auto x : ans){
            cout<<x<<endl;
        }
        vector<int>res;
        for(int i = 0; i<ans.size(); ++i){
            res.push_back(stoi(ans[i]));
        }
        sort(res.begin(),res.end());
        return res[0];
        
    }
};