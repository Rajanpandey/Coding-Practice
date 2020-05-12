int commonCharacterCount(std::string s1, std::string s2) {
    int ans = 0;
    vector<int> countOfS1(26), countOfS2(26);

    for(auto ch : s1) countOfS1[ch - 97]++;
    for(auto ch : s2) countOfS2[ch - 97]++;
    for(int i = 0; i < 26; i++) ans += min(countOfS1[i], countOfS2[i]);

    return ans;
}
