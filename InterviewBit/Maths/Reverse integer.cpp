int Solution::reverse(int A) {
    long int sol = 0;
    
    while(A != 0) {
        sol = sol*10 + A%10;    
        A = A/10;
    }
    
    if(sol > INT_MAX || sol < INT_MIN) { return 0; }
    
    return sol;
}
