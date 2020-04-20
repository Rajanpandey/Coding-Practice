int Solution::trailingZeroes(int A) {
    int ans = 0;
    
    for(int i=5; A/i>=1; i*=5) {
        ans += A/i;
    }
    return ans;
}
