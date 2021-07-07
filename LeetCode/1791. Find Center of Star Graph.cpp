class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>> adjList (n + 1);
        
        for (auto edge : edges) {
            adjList[edge[0] - 1].push_back(edge[1] - 1);
            adjList[edge[1] - 1].push_back(edge[0] - 1);
        }
        
        for (int i = 0; i < adjList.size(); i++) {
            if (adjList[i].size() == n) {
                return i + 1;
            }
        }
        
        return -1;
    }
};
