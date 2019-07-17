int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    int row = A.size(), col = A[0].size();
    int dp[row+1][col+1];

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            dp[i][j] = 0;
            if(A[i][j]) {
                continue;
            }
            if (i == 0 && j == 0) {
                dp[i][j] = 1;
            }
            if(i > 0) {
                dp[i][j] += dp[i-1][j];
            }
            if(j > 0) {
                dp[i][j] += dp[i][j-1];
            }
        }
    }
    return dp[row-1][col-1];
}
