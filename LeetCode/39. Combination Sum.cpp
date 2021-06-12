class Solution {
public:
    void backtracking(vector<vector<int>> &ans, vector<int> arr, vector<int>& candidates, int remain, int start) {
        if (remain < 0) return;
        
        else if (remain == 0) ans.push_back(arr);
            
        else {
            for (int i = start; i < candidates.size(); i++) {
                arr.push_back(candidates[i]);
                backtracking(ans, arr, candidates, remain - candidates[i], i);
                arr.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>> ans;
        backtracking(ans, {}, candidates, target, 0);
        return ans;
    }
};
