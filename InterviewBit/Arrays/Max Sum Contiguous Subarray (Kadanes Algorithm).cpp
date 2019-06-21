int Solution::maxSubArray(const vector<int> &A) {
    int ans = INT_MIN;
    int sum = 0;
    for(auto i:A) {
        sum += i;
        ans = max(sum, ans);
        if(sum < 0) { sum=0; }
    }
    return ans;
}