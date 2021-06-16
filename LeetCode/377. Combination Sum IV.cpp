class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target + 1);
        dp[0] = 1;

        for (int i = 1; i < dp.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i >= nums[j]) {
                    dp[i] += dp[i - nums[j]];
                }
            }
        }

        return dp[target];
    }
};

/*
Recursive solution: Gives TLE:
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        if (target == 0) {
            return 1;
        }
        
        int ans = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (target >= nums[i]) {
                ans += combinationSum4(nums, target - nums[i]);
            }
        }
        
        return ans;
    }
};
/*
