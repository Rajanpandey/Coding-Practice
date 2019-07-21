int Solution::solve(vector<int> &A) {
    int N = A.size();
    sort(A.begin(), A.end());
    
    int count = 0;
    for(int i=0; i<N-1; i++) {
        if(A[i] == A[i+1]) {
            continue;
        }
        
        if(A[i] == N-1-i) {
            return 1;
        }
    }
    if(A[N-1] == 0) {
        return 1;
    }
    return -1;
}
