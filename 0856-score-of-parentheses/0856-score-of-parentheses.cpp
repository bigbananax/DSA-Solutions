class Solution {
public:
    int scoreOfParentheses(string s) {
        int a = 0; 
        int b = 0; 
        for(int i = 0; i<s.size(); ++i){
            if(s[i]=='('){
                a++;
            }
            else{
                a--;
                if(s[i-1]=='('){
                    b+=1<<a;
                }
            }
        }
        return b;
        
    }
};