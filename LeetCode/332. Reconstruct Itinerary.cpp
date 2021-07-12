// Hierholzer's Algorithm to find Eulers's Path
class Solution {
public:
    void DFS(string src, map<string, vector<string>>& adjList, vector<string>& ans) {
        while (!adjList[src].empty()) {
            string s = adjList[src].back();
            adjList[src].pop_back();
            DFS(s, adjList, ans);
        }
        ans.push_back(src);
    }
    
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        map<string, vector<string>> adjList;
        
        for (auto ticket : tickets) {
            adjList[ticket[0]].push_back(ticket[1]);
        }
        
        for (auto &ticket : adjList) {
            sort(ticket.second.begin(), ticket.second.end(), greater<string>());
        }
        
        vector<string> ans;
        DFS("JFK", adjList, ans);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
