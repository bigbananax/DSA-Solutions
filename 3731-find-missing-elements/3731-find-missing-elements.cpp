class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min1 = *min_element(nums.begin(),nums.end());
        int max1 = *max_element(nums.begin(),nums.end());

        set<int>ans;
        for(int x : nums){
            ans.insert(x);
            
        }
        vector<int>res;
        for(int i = min1; i<=max1; ++i){
            if(!ans.count(i)){
                res.push_back(i);
            }
        }
        return res;

        
    }
};