vector<int> rotLeft(vector<int> a, int d) {
    int n = a.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        int newLocation = (n + i - d) % n;
        ans[newLocation] = a[i];
    }

    return ans;
}
