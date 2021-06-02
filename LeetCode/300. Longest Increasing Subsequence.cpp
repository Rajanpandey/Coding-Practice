class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp (nums.size(), 1);

        for (int i = 1; i < nums.size(); i++) {
            int currLongest = 0;
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    currLongest = max(currLongest, dp[j]);
                }
            }
            dp[i] = currLongest + 1;
        }

        return *max_element(dp.begin(), dp.end());
    }
};
