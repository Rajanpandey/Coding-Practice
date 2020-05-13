int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    int ans = INT_MIN;

    for (int i = 0; i < inputArray.size() - k + 1; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++) {
            sum += inputArray[i + j];
        }
        ans = max(ans, sum);
    }

    return ans;
}
