int Solution::uniquePaths(int A, int B) {
    // m+n-2 C n-1 = (m+n-2)! / (n-1)! (m-1)! 
    long long ans = 1;
    for(int i= B; i<(A+B-1); i++) {
        ans *= i;
        ans /= (i-B+1);
    }
    return ans;
}

/* Recursive solution
int Solution::uniquePaths(int A, int B) {
    if(A==1 || B==1) { return 1; }
    return uniquePaths(A-1, B) + uniquePaths(A, B-1);
}
*/