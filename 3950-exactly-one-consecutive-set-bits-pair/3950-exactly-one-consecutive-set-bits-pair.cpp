class Solution {
public:
    bool consecutiveSetBits(int n) {
        string s = bitset<32>(n).to_string();

        int cnt = 0;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '1' && s[i - 1] == '1')
                cnt++;
        }

        return cnt == 1;
    }
};