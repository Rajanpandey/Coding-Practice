class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> count(256);
        for (char ch : s) {
            count[ch]++;
        }

        int odds = 0;
        for (int ch : count) {
            odds += ch & 1;
        }

        return s.size() - odds + (odds > 0);
    }
};
