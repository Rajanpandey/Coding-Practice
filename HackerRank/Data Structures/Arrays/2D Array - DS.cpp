int hourglassSum(vector<vector<int>> arr) {
    int ans = INT_MIN, currSum = 0;

    for (int i = 0; i < arr.size() - 2; i++) {
        for (int j = 0; j < arr[0].size() - 2; j++) {
            currSum = (arr[i][j] + arr[i][j + 1] + arr[i][j + 2]) + (arr[i + 1][j + 1]) + (arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]);
            ans = max(ans, currSum);
        }
    }

    return ans;
}
