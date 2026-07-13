class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int>dp(amount+1,amount+1);
        dp[0]=0;
        for(int i = 1; i<=amount; ++i){
            for(int x : coins){
                if(i-x>=0){
                    dp[i]=min(dp[i],1+dp[i-x]);
                }
            }
        }
        if(dp[amount]>amount) return -1;
        else return dp[amount];
        
    }
};