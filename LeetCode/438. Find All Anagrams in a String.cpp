class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans, freq1(26), freq2(26);
        int n = s.length(), m = p.length();
        int start = 0, end = m - 1;
        
        if (n < m) return ans;
        
        for (auto ch : p) {
            freq1[ch - 'a']++;
        }
        
        for (int i = 0; i < m; i++) {
            freq2[s[i] - 'a']++;
        }
        
        while (start < n && end < n) {
            if (freq1 == freq2) {
                ans.push_back(start);
            }
            
            if (freq2[s[start] - 'a'] > 0) freq2[s[start] - 'a']--;
            start++;
            end++;
            if (end < n) freq2[s[end] - 'a']++;
        }
        
        return ans;
    }
};
