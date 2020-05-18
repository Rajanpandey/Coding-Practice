// Score: 255/300
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

// 300/300 Python Sol:
// def alternatingSort(a):
//     c, l = 0, a[0]
//
//     while c != (len(a) - 1) // 2:
//         c = -c if c < 0 else -c - 1
//         if a[c] <= l:
//             return False
//         l = a[c]
//
//     return True
