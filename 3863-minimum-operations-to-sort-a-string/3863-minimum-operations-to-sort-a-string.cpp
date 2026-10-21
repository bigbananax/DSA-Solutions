class Solution {
public:
    int minOperations(string s) {
        int ans = 0; 
        int n = s.size(); 
        bool sorted = true;
        for(int i = 1; i<n; i++){
            if(s[i]<s[i-1]){
                sorted = false;
                break;
            }

        }
        if(sorted) return 0; 
        if(n==2) return -1;
        char min1 = *min_element(s.begin(),s.end());
        char max1 = *max_element(s.begin(),s.end());
        if(s[0]==min1 || s[n-1]== max1) return 1; 
        for(int i = 1; i<n-1; ++i){
            if(s[i]==min1 || s[i]==max1){
                return 2;
            }
        }
        return 3;

        
        
    }
};