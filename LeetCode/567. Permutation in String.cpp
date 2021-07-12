class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length(), m = s2.length();
        vector<int> freq1(26), freq2(26);

        if (n > m) return false;

        for (int i = 0; i < n; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        int start = 0, end = n - 1;
        while (end < m) {
            if (freq1 == freq2) {
                return true;
            }

            freq2[s2[start] - 'a']--;
            start++;
            end++;
            if (end < m) {
                freq2[s2[end] - 'a']++;
            }
        }
        
        return false;
    }
};
