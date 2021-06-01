class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if (n < 3) return *max_element(nums.begin(), nums.end());
        
        vector <int> dp = nums;
        dp[2] += dp[0];
        
        for (int i = 3; i < n; i++) {
            dp[i] += max(dp[i - 2], dp[i - 3]);
        }
        
        return max(dp[n - 1], dp[n - 2]);
    }
};
