int Solution::lis(const vector<int> &A) {
    vector<int> vec(A.size(), 1);
    int ans = 1;
    
    for(int i=1; i<A.size(); i++){
        for(int j=0; j<i; j++){
            if(A[i] > A[j]){
                vec[i] = max(vec[j]+1, vec[i]);
                ans = max(vec[i], ans);
            }
        }
    }
    
    return ans;
}
