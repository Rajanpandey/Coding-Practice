class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int runningSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            nums[i] += runningSum;
            runningSum = nums[i];
        }
        
        return nums;
    }
};
