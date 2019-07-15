int Solution::solve(vector<vector<int> > &A) {
    int ans = 0;
    int row = A.size();
    int col = A[0].size();
    int count[row][col];
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++){
            if(i == 0) {
                count[i][j] = A[i][j];
            } else if(A[i][j] == 1) {
                count[i][j] = count[i-1][j] + 1;
            } else {
                count[i][j] = 0;
            }
        }
    }
    
    for(int i=0; i<row; i++) {
        sort(count[i], count[i]+col);
        int maxrow = count[i][0]*col;
        for(int j=1; j<col; j++) {
            maxrow = max(maxrow, count[i][j]*(col-j));
        }
        ans = max(ans, maxrow);
    }
    return ans;
}