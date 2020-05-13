std::vector<int> mutateTheArray(int n, std::vector<int> a) {
    if (n == 1) return a;

    vector<int> ans;

    ans.push_back(a[0] + a[1]);

    for (int i = 1; i < n - 1; i++)
        ans.push_back(a[i - 1] + a[i] + a[i + 1]);

    ans.push_back(a[n - 2] + a[n - 1]);

    return ans;
}
