class Solution {
public:
    static bool compare(string s1, string s2) {
        return s1.length() < s2.length();
    }
    
    int longestStrChain(vector<string>& words) {
        int ans = INT_MIN;
        sort(words.begin(), words.end(), compare);
        map<string, int> dp;

        for (auto word : words) {
            dp[word] = 1;

            for (int i = 0; i < word.length(); i++) {
                string prev = word.substr(0, i) + word.substr(i + 1);

                if (dp[prev]) {
                    dp[word] = max(dp[word], dp[prev] + 1);
                }
            }
            ans = max(ans, dp[word]);
        }
        return ans;
    }
};
