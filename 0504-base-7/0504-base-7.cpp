class Solution {
public:
    string convertToBase7(int num) {
        string s = "";
        if(num==0) return "0";
        if(num==7) return "10";
        bool neg = true;
        if(num<0){
            num =abs(num);
            neg = false;
        }
        while(num!=0){
            s+=to_string(num%7);
            num/=7;
        }
        reverse(s.begin(),s.end());
        if(!neg){
            return "-"+s;
        }
        return s;

    
        
    }
};