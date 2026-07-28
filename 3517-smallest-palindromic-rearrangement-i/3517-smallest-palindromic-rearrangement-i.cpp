class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        string s1 = s.substr(0, n / 2);
        sort(s1.begin(), s1.end());
        string res = s1;
        if (n%2==1) {
            res+=s[n/2];
        }
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        res +=s2;

        return res;
    }
};