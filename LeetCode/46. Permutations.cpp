class Solution {
public:
    void backtracking(vector<vector<int>>& ans, vector<int>& nums, vector<int> arr) {
        if (arr.size() == nums.size()) {
            ans.push_back(arr);
        } else {
            for (int i = 0; i < nums.size(); i++) {
                if (find(begin(arr), end(arr), nums[i]) != end(arr)) continue;
                
                arr.push_back(nums[i]);
                backtracking(ans, nums, arr);
                arr.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        backtracking(ans, nums, {});
        return ans;
    }
};
