class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLength = 0, currMax = 0, left = 0;
        vector<int> freq(26);
        
        for (int right = 0; right < s.length(); right++) {
            freq[s[right] - 'A']++;
            currMax = max(currMax, freq[s[right] - 'A']);
            
            while (right - left + 1 - currMax > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};
