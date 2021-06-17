class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vec1(26), vec2(26);
        
        for (auto ch : s) vec1[ch - 'a']++;
        for (auto ch : t) vec2[ch - 'a']++;
        
        return vec1 == vec2;
    }
};
