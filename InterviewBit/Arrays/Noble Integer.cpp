int Solution::solve(vector<int> &A) {
    int N = A.size();
    sort(A.begin(), A.end());
    
    for(int i=0; i<N; i++) {
        if(A[i] == N-1-i && A[i] != A[i+1] || i == N-1 && A[N-1] == 0) {
            return 1;
        }
    }
    return -1;
}
