int Solution::reverse(int A) {
    long sol = 0;
    while(A) {
        sol = sol*10 + A%10;    
        A = A/10;
    }
    return (sol > INT_MAX || sol < INT_MIN) ? 0 : rev;
}
