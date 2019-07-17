int Solution::minimumTotal(vector<vector<int> > &A) {
    int dp[A.size()];
    int l = A.size() - 1;
  
    for(int i=0; i<A[l].size(); i++) {
        dp[i] = A[l][i];
    }
    for(int i=A.size()-2; i>=0; i--) {
        for(int j=0; j<A[i+1].size()-1; j++) {
            dp[j] = A[i][j] + min(dp[j], dp[j+1]);
        }
    }
    return dp[0];
}
