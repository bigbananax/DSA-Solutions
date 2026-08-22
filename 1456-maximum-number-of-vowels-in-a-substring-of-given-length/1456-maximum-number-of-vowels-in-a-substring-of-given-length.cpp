class Solution {
public:
    bool count(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    
    }
    int maxVowels(string s, int k) {
        int ans = 0;
        int maxi = 0;
        for(int i = 0; i<k-1; ++i){
            if(count(s[i])) ans++;
        }
        int n = s.size();
        for(int i = k-1; i<n; ++i){
            if(count(s[i])) ans++;
            maxi = max(maxi,ans);
            if(count(s[i-(k-1)])) ans--;
        }
        return maxi;
        
    }
};