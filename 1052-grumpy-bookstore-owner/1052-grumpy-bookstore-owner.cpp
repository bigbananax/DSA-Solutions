class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ct=0, res=0, sum=0;
        for(int i=0;i<grumpy.size();i++) {
            if(grumpy[i]==0) res+=customers[i];
            else sum+=customers[i];
            if(i>=minutes&&grumpy[i-minutes]==1) sum-=customers[i-minutes];
            ct=max(ct, sum);
        }
        return ct+res;
    }
        
    
};