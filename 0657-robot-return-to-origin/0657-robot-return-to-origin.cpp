class Solution {
public:
    bool judgeCircle(string moves) {
        int L=0 ,R=0, U=0 , D = 0;
        for(char c : moves){
            if(c=='L'){
                L++;
            }
            else if(c=='R') R++;
            else if(c=='U') U++;
            else if(c=='D') D++;
        }
        if(L==R && U==D) return true;
        return false;
        
    }
};