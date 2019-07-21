vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> ans;
    long long N = A.size();
    int repeat = 0, missing = 0;
    
    long long sum = (N*(N+1))/2;
    long long sumSq = (N*(N+1)*(2*N+1))/6;
    
    for(int i=0; i<N; i++) {
        sum -= (long long)A[i];
        sumSq -= (long long)A[i] * (long long)A[i];
    }
    
    missing = (sum + sumSq/sum)/2;
    repeat = missing-sum;
    
    ans.push_back(repeat);
    ans.push_back(missing);
    
    return ans;
}
