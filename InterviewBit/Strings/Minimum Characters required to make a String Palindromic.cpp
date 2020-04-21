int Solution::solve(string A) {
    string B = A;
    reverse(B.begin(), B.end());
    
    if(A == B) { return 0; }
    
    string temp;
    for(int i=A.length()-1; i>=0; i--){
        temp += A[i];
        string x = temp + A;
        string y = x;
        reverse(y.begin(), y.end());
        if(x == y) { return temp.length(); }
    }
}
