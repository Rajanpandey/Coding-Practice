// Graph Coloring Algorithm
class Solution {
public:
    bool DFS(vector<vector<int>> & graph, vector<int> & color, int i) {
        if (color[i]) {
            return color[i] == 1;
        }

        color[i] = -1;

        for(int v : graph[i]) {
            if(!DFS(graph, color, v)) {
                return false;
            }
        }

        color[i] = 1;
        return true;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans;
        vector<int> color(graph.size());

        for (int i = 0; i < graph.size(); ++i) {
            if (DFS(graph, color, i)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

/* DFS Sol:

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

/*
