unsigned int Solution::reverse(unsigned int A) {
    unsigned int ans = 0;
    int i = 0;
    while(A) {
        int LSB = A%2;
        ans += pow(2,31-i) * LSB;
        A /= 2;
        i++;
    }
    return ans;
}
