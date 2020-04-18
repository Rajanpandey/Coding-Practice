int Solution::maxSubArray(const vector<int> &A) {
    int ans = INT_MIN, currentSum = 0;
    for(auto num : A) {
        currentSum += num;
        ans = max(currentSum, ans);
        if(currentSum < 0) { currentSum = 0; }
    }
    return ans;
}

/* Method 2:
int Solution::maxSubArray(const vector<int> &A) {
    int ans = INT_MIN, currentSum = 0;
    for(auto num : A) {
        currentSum = max(currentSum+num, num);
        ans = max(currentSum, ans);
    }
    return ans;
}
*/
