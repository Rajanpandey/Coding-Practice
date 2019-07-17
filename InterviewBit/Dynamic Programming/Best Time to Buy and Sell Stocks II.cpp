int Solution::maxProfit(const vector<int> &A) {
    int ans = 0;
    
    for(int i=1; i<A.size(); i++) {
        int diff = A[i]-A[i-1];
        if(diff > 0) {
            ans += diff;
        }
    }
    return ans;
}
