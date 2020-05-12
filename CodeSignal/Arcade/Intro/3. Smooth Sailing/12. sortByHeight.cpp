std::vector<int> sortByHeight(std::vector<int> a) {
    int n = a.size(), j = n - 1;
    vector<int> ans(n),  b = a;
    sort(b.begin(), b.end());

    for(int i = n - 1; i >= 0; i--) {
        if(a[i] == -1)
            ans[i] = -1;
        else {
            ans[i] = b[j];
            j -= 1;
        }
    }

    return ans;
}
