int Solution::solve(vector<vector<int> > &A) {
    int ans = 0;
    int row = A.size();
    int col = A[0].size();
    int dp[row][col];
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++){
            if(i == 0) {
                dp[i][j] = A[i][j];
            } else if(A[i][j] == 1) {
                dp[i][j] = dp[i-1][j] + 1;
            } else {
                dp[i][j] = 0;
            }
        }
    }
    
    for(int i=0; i<row; i++) {
        sort(dp[i], dp[i]+col);
        int maxrow = dp[i][0]*col;
        for(int j=1; j<col; j++) {
            maxrow = max(maxrow, dp[i][j]*(col-j));
        }
        ans = max(ans, maxrow);
    }
    return ans;
}