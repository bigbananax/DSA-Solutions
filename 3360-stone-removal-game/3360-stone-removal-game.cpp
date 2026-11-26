class Solution {
public:
    bool canAliceWin(int n) {
        int k = 10;
        bool ok = true;
        while(n>=k) {
            n -=k;
            k--;
            ok=!ok;
        }
        return !ok;
    }
};