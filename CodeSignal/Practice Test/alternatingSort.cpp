bool alternatingSort(std::vector<int> a) {
    int n = a.size(), k = 0, l = n - 1;
    vector<int> b (n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            b[i] = a[k];
            k += 1;
        } else {
            b[i] = a[l];
            l -= 1;
        }
    }

    sort(a.begin(), a.end());

    return b == a;
}
