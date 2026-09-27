class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string s1;
        for(char c : s){
            if(c=='('){
                st.push(s1.length());

            }
            else if(c==')'){
                int k = st.top();
                st.pop();
                reverse(s1.begin()+k,s1.end());
            }
            else{
                s1+=c;
            }
        }
        return s1;
        
    }
};