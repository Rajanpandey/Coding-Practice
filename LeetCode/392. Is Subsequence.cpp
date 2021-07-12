class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start = 0;
        
        for (int i = 0; i < t.length(); i++) {
            if (s[start] == t[i]) {
                start++;
            }
        }
        
        return start == s.length();
    }
};
