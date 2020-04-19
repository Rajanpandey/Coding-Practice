static bool compareNum(string a, string b) {
    return a + b > b + a;
}

string Solution::largestNumber(const vector<int> &num) {
    string ans;
    vector<string> str;
    
    for(auto i : num) { str.push_back(to_string(i)); }
    
    sort(str.begin(), str.end(), compareNum);
    
    for(auto i : str) { ans += i; }

    return ans[0] == '0' ? "0" : ans;
}