class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0;
        int currJumpEnd = 0, currFarthestReach = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            currFarthestReach = max(currFarthestReach, nums[i] + i);
            if (i == currJumpEnd) {
                ans++;
                currJumpEnd = currFarthestReach;
            }
        }
        
        return ans;
    }
};
