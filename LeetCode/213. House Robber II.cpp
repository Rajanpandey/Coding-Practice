class Solution {
public:
    int robber(vector<int>& dp) {
        int n = dp.size();

        dp[2] += dp[0];

        for (int i = 3; i < n; i++) {
            dp[i] += max(dp[i - 2], dp[i - 3]);
        }

        return max(dp[n - 1], dp[n - 2]);
    }

    int rob(vector<int>& nums) {
        if (nums.size() <= 3) return *max_element(nums.begin(), nums.end());

        vector<int> dp1(nums.begin(), nums.end() - 1);
        vector<int> dp2(nums.begin() + 1, nums.end());

        return max(robber(dp1), robber(dp2));
    }
};
