vector<int> Solution::findPerm(const string A, int B) {
    vector<int> ans;
    int min = 1, max = B;
    for(auto ch : A) {
        if(ch == 'I') { ans.push_back(min++); }
        if(ch == 'D') { ans.push_back(max--); }
    }
    ans.push_back(max);
    return ans;
}

/* Cutting the code
vector<int> Solution::findPerm(const string A, int B) {
    vector<int> ans;
    int min = 1, max = B;
    for(auto ch : A) { ans.push_back((ch == 'I') ? min++ : max--); }
    ans.push_back(max);
    return ans;
}
*/