string twoStrings(string s1, string s2) {
    for(auto ch : s1)
        if(s2.find(ch) != string::npos) return "YES";
    
    return "NO";
}
