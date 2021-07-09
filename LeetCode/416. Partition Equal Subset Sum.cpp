class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 == 1)  return false;
        
        vector<bool> dp(sum + 1);
        int sumHalf = sum / 2;

        dp[0] = true;
    
        for (int num : nums) {
            for (int i = sumHalf; i > 0; i--) {
                if (i >= num) {
                    dp[i] = dp[i] || dp[i-num];
                }
            }
        
        }
        return dp[sumHalf];
    }
};
