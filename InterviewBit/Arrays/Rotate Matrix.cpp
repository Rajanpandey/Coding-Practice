void transpose(vector<vector<int>> &A) {
    for(int i=0; i<A.size(); i++) {
        for(int j=i; j<A[0].size(); j++) {
            swap(A[i][j], A[j][i]);
        }
    }
}

void reverseRows(vector<vector<int>> &A) {
    for(int i=0; i<A.size(); i++) {
        reverse(A[i].begin(), A[i].end());
    }
}

void Solution::rotate(vector<vector<int> > &A) {
    transpose(A);
    reverseRows(A);
}
