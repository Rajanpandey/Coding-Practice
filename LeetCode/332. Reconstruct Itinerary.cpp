// Hierholzer's Algorithm to find Eulers's Path
class Solution {
public:
    void DFS(string source, map<string, priority_queue<string, vector<string>, greater<string>>>& adjList, vector<string>& ans) {
        while (!adjList[source].empty()) {
            string destination = adjList[source].top();
            adjList[source].pop();
            DFS(destination, adjList, ans);
        }

        ans.push_back(source);
    }

    vector<string> findItinerary(vector<vector<string>>& tickets) {
        vector<string> ans;
        map<string, priority_queue<string, vector<string>, greater<string>>> adjList;

        for (auto ticket : tickets) {
            adjList[ticket[0]].push(ticket[1]);
        }

        DFS("JFK", adjList, ans);

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
