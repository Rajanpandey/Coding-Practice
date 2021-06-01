class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            totalProfit += max(prices[i] - prices[i - 1], 0);
        }

        return totalProfit;
    }
};
