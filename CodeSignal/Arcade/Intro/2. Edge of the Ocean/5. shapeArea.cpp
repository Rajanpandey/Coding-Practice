int shapeArea(int n) {
    return pow(n, 2) + pow(n-1, 2);

    // int ans = 1;
    //
    // if (n == 1) return ans;
    //
    // for (int i = 2; i <= n; i++) {
    //     ans += 4*(i-1);
    // }
    //
    // return ans;
}
