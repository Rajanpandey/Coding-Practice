int Solution::solve(string A) {
    int ans = 0;
    int length = A.length();
    for(int i=0; i<length; i++) {
        if(tolower(A[i]) == 'a' || tolower(A[i]) == 'e' || tolower(A[i]) == 'i' || tolower(A[i]) == 'o' || tolower(A[i]) == 'u') {
            ans += length-i;
        }
    }
    return ans%10003;
}
