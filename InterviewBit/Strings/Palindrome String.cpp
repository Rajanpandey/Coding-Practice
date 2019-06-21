int Solution::isPalindrome(string A) {
    int l=0;
    int r=A.length()-1;
    
    while(l<r) {
        if(!isalnum(A[l])) {
            l++;
            continue;
        }
        if(!isalnum(A[r])) {
            r--;
            continue;
        }
        if(tolower(A[l]) != tolower(A[r])) { 
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}
