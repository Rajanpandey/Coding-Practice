int absoluteValuesSumMinimization(std::vector<int> a) {
    int min = INT_MAX;
    int ans;

    for (int i = 0; i < a.size(); i++) {
        int sumOfDiff = 0;
        for (int j = 0; j < a.size(); j++) {
            sumOfDiff += abs(a[i] - a[j]);
        }
        if (sumOfDiff < min) {
            min = sumOfDiff;
            ans = a[i];
        }
    }

    return ans;
}

// Short sol:
// int absoluteValuesSumMinimization(std::vector<int> a) {
//     return a[(a.size() - 1) / 2];
// }

// Python sol (median_low):
// import statistics
// def absoluteValuesSumMinimization(a):
//     return statistics.median_low(a)
