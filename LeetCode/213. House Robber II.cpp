class Solution {
public:
    int robber(vector<int>& nums) {
        int n = nums.size();
        
        vector <int> dp = nums;
        dp[2] += dp[0];
        
        for (int i = 3; i < n; i++) {
            dp[i] += max(dp[i - 2], dp[i - 3]);
        }
        
        return max(dp[n - 1], dp[n - 2]);
    }
    
    int rob(vector<int>& nums) {
        if (nums.size() <= 3) return *max_element(nums.begin(), nums.end());
        
        vector<int> vec1(nums.begin(), nums.end() - 1);
        vector<int> vec2(nums.begin() + 1, nums.end());
        
        return max(robber(vec1), robber(vec2));
    }
};
