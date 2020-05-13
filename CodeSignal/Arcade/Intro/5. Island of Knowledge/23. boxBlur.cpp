std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    int n = image.size(), m = image[0].size();
    vector<vector<int> > ans(n - 2, vector<int> (m - 2));

    for (int i = 0; i < n-2; i++) {
        for (int j = 0; j < m-2; j++) {
            ans[i][j] = (
                    image[i][j] + image[i][j + 1] + image[i][j + 2] +
                    image[i + 1][j] + image[i + 1][j + 1] + image[i + 1][j + 2] +
                    image[i + 2][j] + image[i + 2][j + 1] + image[i + 2][j + 2]
                ) / 9;
        }
    }
    return ans;
}
