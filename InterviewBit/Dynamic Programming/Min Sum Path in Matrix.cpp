int Solution::minPathSum(vector<vector<int> > &A) {
    int row = A.size(), col = A[0].size();
    int dp[row][col];
    memset(dp, 0, sizeof(dp));
    
    dp[0][0] = A[0][0];
    
    for(int i=1; i<row; i++) {
        dp[i][0] = dp[i-1][0] + A[i][0];
    }
    for(int i=1; i<col; i++) {
        dp[0][i] = dp[0][i-1] + A[0][i];
    }
    
    for(int i=1; i<row; i++) {
        for(int j=1; j<col; j++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + A[i][j];
        }
    }
    return dp[row-1][col-1];
}
