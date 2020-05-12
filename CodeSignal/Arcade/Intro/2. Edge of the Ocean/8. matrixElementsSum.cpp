int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    int sum = 0;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            if (i != 0 && matrix[i-1][j] == 0) matrix[i][j] = 0;
            sum += matrix[i][j];
        }
    }

    return sum;
}
