// Kruskal's method with UnionFind
class UnionFind {
    public:
    vector<int> parent;

    UnionFind(int n) {
        parent.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    void unite(int a, int b) {
        parent[find(a)] = parent[find(b)];
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
};

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size(), ans = 0;
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                pq.push( {abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]), i, j} );
            }
        }

        int count = 0;
        UnionFind uf = UnionFind(n);
        while (count < n - 1) {
            vector<int> edge = pq.top();
            pq.pop();

            if (uf.find(edge[1]) != uf.find(edge[2])) {
                ans += edge[0];
                count++;
                uf.unite(edge[1], edge[2]);
            }
        }

        return ans;
    }
};

/*
Prim's Algo:
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size(), ans = 0, curr = 0;
        
        vector<int> dist(n, INT_MAX);
        vector<bool> visited(n);
        
        for (int i = 0; i < n - 1; i++) {
            visited[curr] = true;
            
            for (int j = 0; j < n; j++) {
                if (!visited[j]) {
                    dist[j] = min(dist[j], abs(points[curr][0] - points[j][0]) + abs(points[curr][1] - points[j][1]));
                }
            }
            
            curr = min_element(dist.begin(), dist.end()) - dist.begin();
            ans += dist[curr];
            dist[curr] = INT_MAX;
        }
        
        return ans;
    }
};

*/
