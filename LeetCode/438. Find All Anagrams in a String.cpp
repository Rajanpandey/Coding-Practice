class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans, freq1(26), freq2(26);
        int n = s.length(), m = p.length();

        if (n < m) return ans;

        for (int i = 0; i < m; i++) {
            freq1[s[i] - 'a']++;
            freq2[p[i] - 'a']++;
        }

        int start = 0, end = m - 1;
        while (end < n) {
            if (freq1 == freq2) {
                ans.push_back(start);
            }

            freq1[s[start] - 'a']--;
            start++;
            end++;
            if (end < n) {
                freq1[s[end] - 'a']++;
            }
        }

        return ans;
    }
};
