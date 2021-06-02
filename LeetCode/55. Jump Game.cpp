// Greedy Solution: O(N) Time and O(1) Space Complexity

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i <= reach) {
                reach = max(reach, i + nums[i]);
            } else {
                break;
            }
        }

        return reach >= nums.size() - 1;
    }
};


/*
Dynamic Programming Solution: O(N) Time and O(N) Space Complexity

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums[0] == 0 && nums.size() > 1) return false;

        vector<int> dp = nums;

        for (int i = 1; i < nums.size() - 1; i++) {
            dp[i] = max(nums[i], dp[i - 1] - 1);

            if (dp[i] == 0) return false;
        }

        return true;
    }
};
*/
