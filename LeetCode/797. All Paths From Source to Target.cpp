class Solution {
public:
    void backtracking(vector<vector<int>>& ans, vector<int> arr, vector<vector<int>>& graph, int curr) {
        arr.push_back(curr);
        
        if (curr == graph.size() - 1) {
            ans.push_back(arr);
            return;
        }
        
        for (auto it : graph[curr]) {
            backtracking(ans, arr, graph, it);
        }
        
        arr.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        backtracking(ans, {}, graph, 0);
        return ans;
    }
};
