class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length(), m = s2.length();
        if (n > m) return false;
        vector<int> freq1(26), freq2(26);
        
        for (auto ch : s1) {
            freq1[ch - 'a']++;
        }
        
        for (int i = 0; i < n; i++) {
            freq2[s2[i] - 'a']++;
        }
        
        int start = 0, end = n - 1;
        while (start < m && end < m) {
            if (freq1 == freq2) {
                return true;
            }
            
            if (freq2[s2[start] - 'a'] > 0) {
                freq2[s2[start] - 'a']--;
            }
            start++;
            end++;
            if (end < m) {
                freq2[s2[end] - 'a']++;
            }
        }
        
        return false;
    }
};
