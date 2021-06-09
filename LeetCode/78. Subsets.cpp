class Solution {
public:
    void backtracking(vector<vector<int>>& ans, vector<int>& nums, vector<int> arr, int start) {
        ans.push_back(arr);

        for (int i = start; i < nums.size(); i++) {
            arr.push_back(nums[i]);
            backtracking(ans, nums, arr, i + 1);
            arr.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        backtracking(ans, nums, {}, 0);
        return ans;
    }
};
