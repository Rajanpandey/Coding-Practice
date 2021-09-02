bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int N = arrive.size();

    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());

    for (int i = 0; i < N - K; i++) {
        if (arrive[i + K] < depart[i]) {
            return false;
        }
    }

    return true;
}
