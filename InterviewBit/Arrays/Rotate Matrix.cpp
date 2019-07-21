void transpose(vector<vector<int>> &A) {
    for(int i=0; i<A.size(); i++) {
        for(int j=i; j<A[0].size(); j++) {
            swap(A[i][j], A[j][i]);
        }
    }
}

void reverseRows(vector<vector<int>> &A) {
    for(int i=0; i<A.size(); i++) {
        for(int j=0, k=A.size()-1; j<k; j++, k--) {
            swap(A[i][j], A[i][k]);
        }
    }
}

void Solution::rotate(vector<vector<int> > &A) {
    transpose(A);
    reverseRows(A);
}
