class Solution {
public:
    int scoreOfString(string s) {
        int count = 0; 
        for(int i = 1; i<s.size(); ++i){
            count+=abs(s[i-1]-s[i]);
        }
        return count;
    }
};