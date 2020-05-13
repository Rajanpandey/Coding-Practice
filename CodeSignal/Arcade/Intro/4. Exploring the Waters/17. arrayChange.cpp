int arrayChange(std::vector<int> inputArray) {
    int ans = 0;

    for (int i = 0; i < inputArray.size() - 1; i++) {
        if (inputArray[i] >= inputArray[i + 1]) {
            ans += inputArray[i] - inputArray[i + 1]  + 1;
            inputArray[i + 1] += inputArray[i] - inputArray[i + 1]  + 1;
        }
    }

    return ans;
}
