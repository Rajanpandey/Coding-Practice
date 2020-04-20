int Solution::isPower(int A) {
    for(int i=1; i<=sqrt(A); i++) {
        for(int j=2; j<=31; j++) {
            if(pow(i, j) == A) { return 1;}
        }
    }
    return false;
}
