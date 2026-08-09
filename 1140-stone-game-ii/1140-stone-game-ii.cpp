class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();

        vector<vector<int>> dp(n, vector<int>(n + 1, 0));
        vector<int> ans(n, 0);
        ans[n - 1] = piles[n - 1];
        for (int x = n - 2; x >= 0; x--) {
            ans[x] = ans[x + 1] + piles[x];
        }
        for (int x = n - 1; x>= 0; x--) {
            for (int y = 1; y<= n; y++) {
                if (x+2*y >= n) {
                    dp[x][y] = ans[x];
                } else {
                    for (int j = 1; j <= 2 * y; j++) {
                        dp[x][y] = max(
                            dp[x][y],
                            ans[x] - dp[x + j][max(y, j)]
                        );
                    }
                }
            }
        }

        return dp[0][1];
    }
};