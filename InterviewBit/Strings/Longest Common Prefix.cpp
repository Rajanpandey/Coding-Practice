string Solution::longestCommonPrefix(vector<string> &A) {
    int vector_size = A.size();
    
    if(vector_size == 0) { return ""; }
    if(vector_size == 1) { return A[0]; }
    
    sort(A.begin(), A.end());
    
    int i = 0; 
    int min_length = min(A[0].length(), A[vector_size-1].length());
    while(i<min_length && A[0][i]==A[vector_size-1][i]) {
        i++; 
    }
    return A[0].substr(0, i);
}
