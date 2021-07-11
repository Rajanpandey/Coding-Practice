class Solution {
public:
    void DFS(int curr, int prev, vector<vector<int>>& ans, map<int, vector<int>>& adjList, vector<int>& disc, vector<int>& low, int time) {
        disc[curr] = low[curr] = time++;

        for (int next : adjList[curr]) {
            if (disc[next] == 0) {
                DFS(next, curr, ans, adjList, disc, low, time);
                low[curr] = min(low[curr], low[next]);
            } else if (next != prev) {
                low[curr] = min(low[curr], disc[next]);
            }

            if (low[next] > disc[curr]) {
                ans.push_back({curr, next});
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> ans;
        map<int, vector<int>> adjList;
        vector<int> disc(n), low(n);
        int time = 1;

        for (auto conn : connections) {
            adjList[conn[0]].push_back(conn[1]);
            adjList[conn[1]].push_back(conn[0]);
        }
        DFS(0, -1, ans, adjList, disc, low, time);

        return ans;
    }
};
