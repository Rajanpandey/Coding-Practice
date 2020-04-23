class Solution {
public:
    int n, m;
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        n = grid.size();
        if(n == 0) { return 0; }
        m = grid[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                if(grid[i][j] == '1') {
                    DFS(grid, i, j);
                    ans += 1;
                }
        }   
        
        return ans;
    }
    
    void DFS(vector<vector<char>>& grid, int i, int j) {
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j] != '1') { return; }
        grid[i][j] = '0';  //Mark all the visited part of the island as 0 so it's not counted again
        DFS(grid, i+1, j);
        DFS(grid, i-1, j);
        DFS(grid, i, j+1);
        DFS(grid, i, j-1);
    }
};
