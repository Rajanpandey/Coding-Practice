// Greedy Solution:
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, sum = 0;
        for (auto num : nums) {
            sum += num;
            ans = max(sum, ans);
            if (sum < 0) {
                sum = 0;
            }
        }
        return ans;
    }
};

/*
DP Solution:

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp (nums);
        int ans = dp[0];

        for (int i = 1; i < nums.size(); i++) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            ans = max(ans, dp[i]);
        }

        return ans;
    }
};

/*
