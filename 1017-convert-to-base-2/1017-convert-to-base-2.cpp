class Solution {
public:
    string baseNeg2(int n) {
        string s = "";
        while(n){
            int rem = n%-2;
            n/=-2;
            if(rem<0){
                rem+=2;
                n++;
            }
            s=to_string(rem)+s;

        }
        return max(string("0"),s);
    }
};