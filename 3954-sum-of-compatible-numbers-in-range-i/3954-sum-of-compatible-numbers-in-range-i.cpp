class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        vector<int>ans(n);
        for(int i = 0; i<=n+k; ++i){
            if(abs(n-i)<=k && (n&i)==0){
                ans.push_back(i);
            }
        }
        int sum = accumulate(ans.begin(),ans.end(),0);
        return sum;
        
    }
};