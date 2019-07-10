int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int smallest = INT_MAX;
    for(int i=0; i<A.size()-1; i++) {
        smallest = min(A[i] ^ A[i+1], smallest);
    }
    return smallest;
}
