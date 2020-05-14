int differentSquares(std::vector<std::vector<int>> matrix) {
    set<vector<int> > mySet;

    for (int i = 0; i < matrix.size() - 1; i++) {
        for (int j = 0; j < matrix[0].size() - 1; j++) {
            mySet.insert({ matrix[i][j], matrix[i][j + 1], matrix[i + 1][j], matrix[i + 1][j + 1] });
        }
    }

    return mySet.size();
}
