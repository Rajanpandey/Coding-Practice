class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int slow = 0, fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != 0) {
                swap(nums[slow], nums[fast]);
                slow++;
            }
        }
    }
};
