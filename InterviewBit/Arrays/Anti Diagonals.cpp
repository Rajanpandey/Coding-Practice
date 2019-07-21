vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int N = A.size();
    vector<vector<int>> ans(N*2-1);
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            ans[i+j].push_back(A[i][j]);
        }
    }
    return ans;
}
