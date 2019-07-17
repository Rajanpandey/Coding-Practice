int Solution::minDistance(string A, string B) {
    int dp[A.size()+2][B.size()+2];
    
    for(int i=0; i<=A.size(); i++) {
        for(int j=0; j<=B.size(); j++) {
            if(i == 0) {
                dp[i][j] = j;
            } else if(j == 0) {
                dp[i][j] = i;
            } else if(A[i-1] == B[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                                //   insert,        remove,       replace
                dp[i][j] = 1 + min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1]));
            }
        }
    }
    
    return dp[A.size()][B.size()];
}
