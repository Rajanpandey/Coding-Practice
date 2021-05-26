class Solution {
public:
    string expandAroundCenter(string s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - (left + 1));
    }

    string longestPalindrome(string s) {
        if (s == "") return "";
        if (s.length() == 1) return s;

        string ans = "";

        for (int i = 0; i < s.length() - 1; i++) {
            string p = expandAroundCenter(s, i, i);
            string q = expandAroundCenter(s, i, i + 1);

            if (ans.length() < q.length() || ans.length() < p.length()) {
                ans = (p.length() > q.length()) ? p : q;
            }
        }
        return ans;
    }
};
