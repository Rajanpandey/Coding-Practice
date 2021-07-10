class Solution {
public:
    void backtracking(vector<int>& nums, vector<vector<int>>& ans, vector<int> arr, map<int, int>& visited) {
        if (arr.size() == nums.size()) {
            ans.push_back(arr);
            return;
        }
        
        for (auto iter : visited) {
            if (iter.second != 0) {
                arr.push_back(iter.first);
                visited[iter.first]--;
                
                backtracking(nums, ans, arr, visited);
                
                arr.pop_back();
                visited[iter.first]++;
            }
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map<int, int> visited;
        for (auto num : nums) {
            visited[num]++;
        }
        
        vector<vector<int>> ans;
        backtracking(nums, ans, {}, visited);
        return ans;
    }
};
