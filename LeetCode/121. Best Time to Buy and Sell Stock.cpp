class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;
        
        int minPrice = prices[0], ans = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            ans = max(ans, prices[i] - minPrice);
        }
        
        return ans;
    }
};
