class Solution {
public:
    void DFS(vector<vector<int>>& isConnected, vector<int>& visited, int i) {
        for (int j = 0; j < isConnected.size(); j++) {
            if (isConnected[i][j] == 1 && visited[j] == 0) {
                visited[j] = 1;
                DFS(isConnected, visited, j);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> visited(isConnected.size());
        int count = 0;
        
        for (int i = 0; i < visited.size(); i++) {
            if (visited[i] == 0) {
                DFS(isConnected, visited, i);
                count++;
            }
        }
        
        return count;
    }
};
