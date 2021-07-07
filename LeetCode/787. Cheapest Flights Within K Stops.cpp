class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> dp(n, INT_MAX);
        dp[src] = 0;
        
        for (int i = 0; i < k + 1; i++) {
            vector<int> temp = dp;
            for (auto f : flights) {
                int from = f[0];
                int to = f[1];
                int cost = f[2];
                
                if (dp[from] != INT_MAX) {
                    temp[to] = min(temp[to], dp[from] + cost);
                }
            }
            dp = temp;
        }
        
        return dp[dst] == INT_MAX ? -1 : dp[dst];
    }
};
