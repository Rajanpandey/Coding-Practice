int Solution::titleToNumber(string A) {
    int ans = 0;
    for(auto ch : A) {
        ans *= 26;
        ans += ch-'A' + 1;
    }
    return ans;
}
