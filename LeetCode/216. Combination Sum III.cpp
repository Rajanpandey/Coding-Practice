class Solution {
public:
    void backtracking(vector<vector<int>> &ans, vector<int> arr, int k, int target, int start) {
        if (target < 0 || arr.size() > k) return;
        
        else if (target == 0 && arr.size() == k) ans.push_back(arr);
            
        else {
            for (int i = start; i <= 9; i++) {
                arr.push_back(i);
                backtracking(ans, arr, k, target - i, i + 1);
                arr.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        backtracking(ans, {}, k, n, 1);
        return ans;
    }
};
