class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0;
        int currEnd = 0, currFarthest = 0;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            currFarthest = max(currFarthest, nums[i] + i);
            if (i == currEnd) {
                ans++;
                currEnd = currFarthest;
            }
        }
        
        return ans;
    }
};
