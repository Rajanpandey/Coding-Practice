class Solution {
public:
    void backtracking(vector<vector<int>> &ans, vector<int> arr, vector<int>& candidates, int remain, int start) {
        if (remain < 0) return;
        
        else if (remain == 0) ans.push_back(arr);
            
        else {
            for (int i = start; i < candidates.size(); i++) {
                // Skip Duplicates
                if(i > start && candidates[i] == candidates[i-1]) continue;
                
                arr.push_back(candidates[i]);
                backtracking(ans, arr, candidates, remain - candidates[i], i + 1);
                arr.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>> ans;
        backtracking(ans, {}, candidates, target, 0);
        return ans;
    }
};
