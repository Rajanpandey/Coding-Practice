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
