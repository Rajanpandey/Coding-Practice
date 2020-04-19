void Solution::setZeroes(vector<vector<int> > &A) {
    vector<int> zeroRows;
    vector<int> zeroCols;
    
    for(int i=0; i<A.size(); i++) {
        for(int j=0; j<A[0].size(); j++) {
            if(A[i][j] == 0) {
                zeroRows.push_back(i);
                zeroCols.push_back(j);
            }
        }
    }
    
    for(int i=0; i<zeroRows.size(); i++) {
        for(int j=0; j<A[0].size(); j++) {
            A[zeroRows[i]][j] = 0;
        }
    }
    
    for(int i=0; i<A.size(); i++) {
        for(int j=0; j<zeroCols.size(); j++) {
            A[i][zeroCols[j]] = 0;
        }
    }
}
