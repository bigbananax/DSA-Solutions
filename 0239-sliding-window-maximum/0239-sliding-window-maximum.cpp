class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;

        int left = 0;
        int right = k;
        map<int, int> window;
        for (int i = 0; i < k; ++i) {
            ++window[nums[i]];
        }
        res.push_back((--window.end())->first);

        while (right < nums.size()) {
            if (--window[nums[left]] == 0) {
                window.erase(nums[left]);
            }
            ++window[nums[right]];
            res.push_back((--window.end())->first);

            ++left;
            ++right;
        }
        return res;
    }
};