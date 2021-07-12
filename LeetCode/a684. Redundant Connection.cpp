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
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        UnionFind uf = UnionFind(edges.size() + 1);
        
        for (auto edge : edges) {
            if (uf.find(edge[0]) == uf.find(edge[1])) {
                return edge;
            } else {
                uf.unite(edge[0], edge[1]);
            }
        }
        
        return edges[0];
    }
};
