int Solution::repeatedNumber(const vector<int> &A) {
    bool arr[A.size()+1];
    memset(arr, 0, sizeof(arr));
    
    for(int i=0; i<A.size(); i++) {
        if(arr[A[i]]) {
            return A[i];
        } else {
            arr[A[i]] = true;
        }
    }
    return -1;
}
