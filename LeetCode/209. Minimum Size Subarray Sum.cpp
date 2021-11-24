class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int fast = 0, slow = 0, n = nums.size(), ans = INT_MAX, currSum = 0;
        
        for (fast = 0; fast < n; fast++) {
            currSum += nums[fast];
            
            while (currSum >= target) {
                ans = min(ans, fast - slow + 1);
                currSum -= nums[slow];
                slow++;
            }
        }
        
        return (ans != INT_MAX) ? ans : 0;
    }
};
