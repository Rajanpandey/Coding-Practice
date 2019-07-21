void Solution::rotate(vector<vector<int> > &A) {
    int N = A.size()-1;

    for(int i=0; i<A.size()/2; i++) {
        for(int j=i; j<N-i; j++) {
            int temp = A[i][j];
            A[i][j] = A[N-j][i];
            A[N-j][i] = A[N-i][N-j];
            A[N-i][N-j] = A[j][N-i];
            A[j][N-i] = temp;
        }
    }
}
