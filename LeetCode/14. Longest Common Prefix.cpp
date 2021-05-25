class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            for (int j = 0; j < ans.size(); j++) {
                if (ans[j] != strs[i][j]) {
                    ans = ans.substr(0, j);
                    break;
                }
            }
        }

        return ans;
    }
};
