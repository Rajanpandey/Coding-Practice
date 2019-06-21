vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(), A.end());
    vector<int> ans;
    int carry = 1;
    for (auto i:A) {
        int sum = i + carry;
        ans.push_back(sum%10);
        carry = sum / 10;
    }
    if (carry) { ans.push_back(carry%10); }
    while (ans[ans.size() - 1] == 0 && ans.size() > 1) {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
