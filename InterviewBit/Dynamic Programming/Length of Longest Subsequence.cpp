int Solution::longestSubsequenceLength(const vector<int> &A) {
    int N = A.size();
    vector<int> inc(N, 1);
    vector<int> dec(N, 1);

    for (int i = 1; i < N; i++)
        for (int j = 0; j < i; j++)
            if (A[j] < A[i])
                inc[i] = max(inc[j]+1, inc[i]);

    for (int i = N - 1; i >= 0; i--)
        for (int j = N - 1; j > i; j--)
            if (A[j] < A[i])
                dec[i] = max(dec[j]+1, dec[i]);

    int ans = 0;
    for(int i = 0; i < N; i++)
        ans = max(ans, inc[i] + dec[i] - 1);
    return ans;
}
