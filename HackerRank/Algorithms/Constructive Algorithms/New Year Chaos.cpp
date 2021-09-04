void minimumBribes(vector<int> q) {
    int count = 0, n = q.size();

    for (int i = n - 1; i >= 0; i--) {
        if (q[i] != (i + 1)) {
            if (q[i - 1] == (i + 1)) {
                count++;
                swap(q[i], q[i - 1]);
            } else if (q[i - 2] == (i + 1)) {
                count += 2;
                swap(q[i - 2], q[i - 1]);
                swap(q[i - 1], q[i]);
            } else {
                cout << "Too chaotic" << endl;
                return;
            }
        }
    }

    cout << count << endl;
}
