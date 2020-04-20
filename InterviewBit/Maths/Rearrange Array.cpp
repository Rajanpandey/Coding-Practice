void Solution::arrange(vector<int> &A) {
    int n = A.size();
    
    for(int i=0;i<n;i++) {
        A[i] += (A[A[i]] % n) * n;
    }
    
    for(int i=0;i<n;i++) {
        A[i] /= n;
    }
}

/*
If using extra space was allowed
void Solution::arrange(vector<int> &A) {
    vector<int> vec = A;
    for(int i=0; i<A.size(); i++) {
        A[i] = vec[vec[i]];
    }
}
*/