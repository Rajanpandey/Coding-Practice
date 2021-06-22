class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int currValue = nums[i];
            
            nums[abs(currValue) - 1] = -nums[abs(currValue) - 1];
            
            if (nums[abs(currValue) - 1] > 0) {
                ans.push_back(abs(nums[i]));
            }
        }

        return ans;
    }
};
