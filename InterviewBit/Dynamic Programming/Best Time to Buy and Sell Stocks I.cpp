int Solution::maxProfit(const vector<int> &A) {
    int min_p = INT_MAX;
    int ans = 0;
    
    for(int i=0; i<A.size(); i++) {
        min_p = min(min_p, A[i]);
        ans = max(ans, A[i] - min_p);
    }
    
    return ans;
}
