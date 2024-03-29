class Solution {
public:
    void backtrack(vector<string> &ans, string str, int open, int close, int n) {
        if (open == n && close == n) {
            ans.push_back(str);
            return;
        }

        if (open < n) {
            backtrack(ans, str + '(', open + 1, close, n);
        }

        if (close < n && close < open) {
            backtrack(ans, str + ')', open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(ans, "", 0, 0, n);
        return ans;
    }
};
