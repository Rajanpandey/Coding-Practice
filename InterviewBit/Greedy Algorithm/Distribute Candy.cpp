int Solution::candy(vector<int> &A) {
    int ans = 0;
    vector<int> vec(A.size(), 1);
    
    for(int i=1; i<A.size(); i++) {
        if(A[i] > A[i-1]) {
            vec[i] = vec[i-1] + 1;
        }
    }
    for(int i=A.size()-1; i>0; i--) {
        if(A[i-1] > A[i]) {
            vec[i-1] = max(vec[i] + 1, vec[i-1]);
        }
    }
    for(auto i:vec) {
        ans += i;
    }
    return ans;
}
