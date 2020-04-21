int Solution::searchInsert(vector<int> &A, int B) {
    int  l = 0, r = A.size()-1;
    while(l <= r) {
        int mid = l + (r-l)/2;
        
        if(A[mid] < B) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return l;
}
