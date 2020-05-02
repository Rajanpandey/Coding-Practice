class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = n ? matrix[0].size() : 0;
        vector<vector<int> > dp(n+1, vector<int>(m+1));
        
        int maxSquareSide = 0;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(matrix[i-1][j-1] == '1') {
                    dp[i][j] = min( min(dp[i][j-1], dp[i-1][j]), dp[i-1][j-1] ) + 1;
                    maxSquareSide = max(maxSquareSide, dp[i][j]);
                }
            }
        }
        
        return maxSquareSide*maxSquareSide;
    }
};
