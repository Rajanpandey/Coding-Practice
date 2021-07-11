// Graph Coloring BFS Algorithm:
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> colors(graph.size());   // 0 -> No color, 1 -> Blue, -1 -> Red
        
        for (int i = 0; i < graph.size(); i++) {
            if (colors[i] != 0) continue;
            queue<int> q;
            q.push(i);
            colors[i] = 1;
            
            while (!q.empty()) {
                int curr = q.front();
                q.pop();
                
                for (auto next : graph[curr]) {
                    if (colors[next] == 0) {
                        colors[next] = -colors[curr];
                        q.push(next);
                    }
                    else if (colors[next] != -colors[curr]) {
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};

/* Graph Coloring DFS Algorithm:

class Solution {
public:
    bool DFS(vector<vector<int>>& graph, vector<int>& colors, int color, int node) {
        if (colors[node] != 0) {
            return colors[node] == color;
        }
        colors[node] = color;

        for (auto next : graph[node]) {
            if (!DFS(graph, colors, -color, next)) {
                return false;
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> colors(graph.size());   // 0 -> No color, 1 -> Blue, -1 -> Red

        for (int i = 0; i < graph.size(); i++) {
            if (colors[i] == 0 && !DFS(graph, colors, 1, i)) {
                return false;
            }
        }
        return true;
    }
};

/*
