class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>lc,up;
        int ans = 0;
        for(char c : word){
            if(c>='a' && c<='z') lc.insert(c);
            else up.insert(c);
        }
        for(char c : up){
           if(lc.count(tolower(c))){
            ans++;
           }
        }
        return ans;
        

        
    }
};