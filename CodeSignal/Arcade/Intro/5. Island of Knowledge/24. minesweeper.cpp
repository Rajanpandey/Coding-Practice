int neighboringBombs(vector<vector<bool> > matrix, int i, int j, int n, int m) {
    int bombCount = 0;

    if (i > 0 && j > 0)         bombCount += matrix[i-1][j-1];
    if (i > 0)                  bombCount += matrix[i-1][j];
    if (i > 0 && j < m - 1)     bombCount += matrix[i-1][j+1];
    if (j > 0)                  bombCount += matrix[i][j-1];
    if (j < m - 1)              bombCount += matrix[i][j+1];
    if (i < n - 1 && j > 0)     bombCount += matrix[i+1][j-1];
    if (i < n - 1)              bombCount += matrix[i+1][j];
    if (i < n - 1 && j < m - 1) bombCount += matrix[i+1][j+1];

    return bombCount;
}

std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int> > ans(n, vector<int> (m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans[i][j] = neighboringBombs(matrix, i, j, n, m);
        }
    }

    return ans;
}
