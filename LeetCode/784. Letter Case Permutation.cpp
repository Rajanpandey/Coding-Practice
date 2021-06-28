class Solution {
public:
    void backtracking(string s, int i, vector<string>& ans) {
        if (i == s.length()) {
            ans.push_back(s);
        }
        else {
            if (isalpha(s[i])) {
                s[i] = toupper(s[i]);
                backtracking(s, i + 1, ans);
                s[i] = tolower(s[i]);
                backtracking(s, i + 1, ans);
            }
            else {
                backtracking(s, i + 1, ans);
            }
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> ans = {};
        backtracking(s, 0, ans);
        return ans;
    }
};
