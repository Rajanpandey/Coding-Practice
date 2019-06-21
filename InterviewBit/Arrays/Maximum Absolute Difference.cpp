int Solution::maxArr(vector<int> &A) {
    int n = A.size();
    int ans = INT_MIN;
    for(int i=0; i<n-1; i++) {
        for(int j=1; j<n; j++) {
            ans = max(ans, abs(A[i]-A[j])+abs(i-j));
        }
    }
    return ans;
}
