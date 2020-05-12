int commonChild(string s1, string s2) {
    int n = s1.length(), m = s2.length();
    vector<vector<int> > dp(n+1, vector<int>(m+1));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(s1[i] == s2[j]) {
                dp[i+1][j+1] = dp[i][j] + 1;
            } else {
                dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }
    return dp[n][m];
}
