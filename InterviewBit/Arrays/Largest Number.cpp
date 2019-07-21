bool checkLarger(int a, int b){
    string aa = to_string(a);
    string bb = to_string(b);
    string st = aa + bb;
    string rev = bb + aa;
    
    return st > rev;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> sol = A;
    
    sort(sol.begin(), sol.end(), checkLarger);
    
    string ans = "";
    for(auto i:sol){
        ans += to_string(i);
    }
    return ans[0] == '0' ? "0" : ans;
}
