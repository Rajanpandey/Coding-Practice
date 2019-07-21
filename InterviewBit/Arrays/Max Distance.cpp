int Solution::maximumGap(const vector<int> &A) {
    int N = A.size();
    int lmin[N], rmax[N];
    
    lmin[0] = A[0];
    for(int i=1; i<N; i++) {
        lmin[i] = min(A[i], lmin[i-1]);
    }
    
    rmax[N-1] = A[N-1];
    for(int i=N-2; i>=0; i--) {
        rmax[i] = max(A[i], rmax[i+1]);
    }
    
    int i = 0, j = 0;
    int ans = -1;
    while(i<N && j<N) {
        if(lmin[i] <= rmax[j]) {
            ans = max(ans, j-i);
            j++;
        } else {
            i++;
        }
    }
    
    return ans;
}
