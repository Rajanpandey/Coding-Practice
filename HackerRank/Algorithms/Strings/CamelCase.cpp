int camelcase(string s) {
    int ans = 1;
    
    for(auto ch : s)
        if(isupper(ch)) ++ans;
    
    return ans;
}
