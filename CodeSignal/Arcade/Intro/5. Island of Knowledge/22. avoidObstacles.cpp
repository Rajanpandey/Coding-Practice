int avoidObstacles(std::vector<int> inputArray) {
    int ans = 1;
    bool found = false;

    while (!found) {
        for (int i = 0; i < inputArray.size(); i++) {
            if (inputArray[i] % ans == 0) {
                ans += 1;
                found = false;
                break;
            }
            found = true;
        }
        if (found) return ans;
    }
}
