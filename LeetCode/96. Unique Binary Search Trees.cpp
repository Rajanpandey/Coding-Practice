class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+2, 0);
        dp[0] = 1;
        dp[1] = 1;

        /* Catalan Number
            F(n) = F(0) * F(n-1)
                 + F(1) * F(n-2)
                 + F(2) * F(n-3)
                 + ...
                 + F(n-2) * F(1)
                 + F(n-1) * F(0)
        */
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                dp[i] += dp[j - 1] * dp[i - j];
            }
        }

        return dp[n];
    }
};
