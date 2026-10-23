class Solution {
private:
    vector<int> res;
    int ans = 0;
    void solve(int i, int n, vector<int>& nums, int k) {
        if(i == n){
            if(res.empty()) return;

            for(int a = 0; a < res.size(); a++) {
                for(int b = a + 1; b < res.size(); b++) {
                    if(abs(res[a] - res[b]) == k) {
                        return;
                    }
                }
            }
            ans++;
            return;
        }
        res.push_back(nums[i]);
        solve(i + 1, n, nums, k);
        res.pop_back();
        solve(i + 1, n, nums, k);
    }

public:
    int beautifulSubsets(vector<int>& nums, int k) {
        res.clear();
        ans = 0;
        solve(0, nums.size(), nums, k);
        return ans;
    }
};