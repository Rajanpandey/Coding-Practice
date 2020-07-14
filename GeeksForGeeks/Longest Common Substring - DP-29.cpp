#include <bits/stdc++.h>
using namespace std;

int LCSubStr(string X, string Y, int m, int n) {
    int ans = 0;
    int dp[m+1][n+1];

    for (int i=0; i<=m; i++) {
        for (int j=0; j<=n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;

            else if (X[i-1] == Y[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                ans = max(ans, dp[i][j]);
            }

            else
                dp[i][j] = 0;
        }
    }

    return ans;
}

int main() {
    string X = "OldSite:GeeksforGeeks.org";
    string Y = "NewSite:GeeksQuiz.com";

    int m = X.length(), n = Y.length();

    cout << "Length of Longest Common Substring is "
        << LCSubStr(X, Y, m, n);
    return 0;
}
