int Solution::uniquePaths(int A, int B) {
    // A+B-2 C B-1 = (A+B-2)! / (A-1)! (B-1)! 
    long long ans = 1;
    for(int i= B; i<(A+B-1); i++) {
        ans *= i;
        ans /= (i-B+1);
    }
    return ans;
}

/* 
Recursive solution:
int Solution::uniquePaths(int A, int B) {
    if(A==1 || B==1) { return 1; }
    return uniquePaths(A-1, B) + uniquePaths(A, B-1);
}

DP solution:
int Solution::uniquePaths(int A, int B) {
    vector<int> dp(A, 1);
    
    for(int i=1; i<B; i++) {
        for(int j=1; j<A; j++) {
            dp[j] += dp[j-1];
        }
    }
    
    return dp[A-1];
}
*/