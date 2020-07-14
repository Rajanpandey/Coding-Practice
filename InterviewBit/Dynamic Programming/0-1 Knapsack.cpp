int Solution::solve(vector<int> &profit, vector<int> &weight, int capacity) {
    int n = profit.size();
    vector<vector<int>> dp(n + 1, vector<int> (capacity + 1));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= capacity; j++) {
            if(weight[i - 1] <= j)
                dp[i][j] = max(
                    dp[i - 1][j],
                    dp[i - 1][j - weight[i-1]] + profit[i-1]
                );
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][capacity];
}
