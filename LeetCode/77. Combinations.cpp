class Solution {
public:
    void backtracking(int start, int end, int k, vector<vector<int>>& ans, vector<int> arr) {
        if (arr.size() == k) {
            ans.push_back(arr);
            return;
        }

        for (int i = start; i <= end; i++) {
            arr.push_back(i);
            backtracking(i + 1, end, k, ans, arr);
            arr.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        backtracking(1, n, k, ans, {});
        return ans;
    }
};
