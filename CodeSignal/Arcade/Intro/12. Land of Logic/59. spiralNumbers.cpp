std::vector<std::vector<int>> spiralNumbers(int n) {
    vector<vector<int>> ans(n, vector<int>(n, 0));
    int i = 0;
    int j, k = 1;

    while(k <= n*n) {
        //left to right
        j = i;
        while(j < n-i) {
            ans[i][j++] = k++;
        }

        //top to bottom
        j = i+1;
        while(j < n-i) {
            ans[j++][n-i-1] = k++;
        }

        //right to left
        j = n-i-2;
        while(j > i) {
            ans[n-i-1][j--] = k++;
        }

        //bottom to  top
        j = n-i-1;
        while(j > i) {
            ans[j--][i] = k++;
        }

        // next loop
        i++;
    }

    return ans;
}
