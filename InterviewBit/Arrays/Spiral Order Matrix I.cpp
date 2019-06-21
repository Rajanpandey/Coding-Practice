vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> ans;
    int T, B, L, R;
    T = 0;
    B = A.size()-1;
    L = 0;
    R = A[0].size()-1;
    
    // direction 0 => Left to Right
    //           1 => Top to Bottom
    //           2 => Right to Left
    //           3 => Bottom to Top
    int direction = 0;
    
    while(L<=R && T<=B) {
        if(direction == 0) {
            for(int i=L; i<=R; i++) {
                ans.push_back(A[T][i]);
            }
            T++;
        } else if(direction == 1) {
            for(int i=T; i<=B; i++) {
                ans.push_back(A[i][R]);
            }
            R--;
        } else if(direction == 2) {
            for(int i=R; i>=L; i--) {
                ans.push_back(A[B][i]);
            }
            B--;
        } else if(direction == 3) {
            for(int i=B; i>=T; i--) {
                ans.push_back(A[i][L]);
            }
            L++;
        }
        direction = (direction+1)%4;
    }
    return ans;
}
