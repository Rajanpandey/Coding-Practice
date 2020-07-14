#include <bits/stdc++.h>
using namespace std;

int cutRod(int price[], int n) {
    int dp[n+1];
    dp[0] = 0;

    for (int i = 1; i<=n; i++) {
        int max_val = INT_MIN;
        for (int j = 0; j < i; j++)
            max_val = max(max_val, price[j] + dp[i-j-1]);
        dp[i] = max_val;
    }

    return dp[n];
}

int main() {
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtainable Value is %dn", cutRod(arr, size));
    getchar();
    return 0;
}
