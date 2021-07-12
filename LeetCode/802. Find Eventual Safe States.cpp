class Solution {
public:
    unordered_set<int> visitedNodes;
    unordered_set<int> cycleNodes;
    unordered_set<int> safeNodes;

    bool DFS(vector<vector<int>>& graph, int i) {
        if (safeNodes.find(i) != safeNodes.end()) return true;
        if (cycleNodes.find(i) != cycleNodes.end()) return false;

        if (visitedNodes.find(i) != visitedNodes.end()) {
            cycleNodes.insert(i);
            return false;
        }

        visitedNodes.insert(i);

        for (int node : graph[i]) {
            if (!DFS(graph, node)) {
                cycleNodes.insert(i);
                return false;
            }
        }

        safeNodes.insert(i);
        return true;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans;

        for (int i = 0; i < graph.size(); i++) {
            if (DFS(graph, i)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

/* Graph Coloring Algorithm:

class Solution {
public:
    bool DFS(vector<vector<int>> & graph, vector<int> & colors, int i) {
        if (colors[i] != 0) {
            return colors[i] == 1;
        }

        colors[i] = -1;

        for (int node : graph[i]) {
            if (!DFS(graph, colors, node)) {
                return false;
            }
        }

        colors[i] = 1;
        return true;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans;
        vector<int> colors(graph.size());   // 0 -> No color, 1 -> Blue, -1 -> Red

        for (int i = 0; i < graph.size(); i++) {
            if (DFS(graph, colors, i)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

/*
