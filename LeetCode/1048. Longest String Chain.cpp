class Solution {
public:
    static bool compare(string s1, string s2) {
        return s1.length() < s2.length();
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), compare);
        map<string, int> dp;
        
        int ans;
        for (auto word : words) {
            for (int i = 0; i < word.length(); i++) {
                string pre = word.substr(0, i) + word.substr(i + 1);
                dp[word] = max(dp[word], (dp.find(word) != dp.end()) ? dp[pre] + 1 : 1);
            }
            ans = max(ans, dp[word]);
        }
        return ans;
    }
};
