int Solution::lengthOfLastWord(const string A) {
    int ans = 0;
    for(int i=A.length()-1; i>=0; i--) {
        if(isalpha(A[i])) {
            ans += 1;
        } else if(ans != 0){
            break;
        }
    }
    return ans;
}
