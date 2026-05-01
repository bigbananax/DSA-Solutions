class Solution {
public:
    vector<int> findValidElements(vector<int>& a) {
        vector<int> ans;
        int n = a.size();
        for (int i = 0; i < n; i++) {
            bool l = true;
            for (int j = 0; j < i; j++) {
                if (a[i] <= a[j]) {
                    l = false;
                    break;
                }
            }
            bool r = true;
            if (!l) {
                for (int j = i + 1; j < n; j++) {
                    if (a[i] <= a[j]) {
                        r = false;
                        break;
                    }
                }
            }
            if (l || r) {
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};