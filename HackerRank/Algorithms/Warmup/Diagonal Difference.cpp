int diagonalDifference(vector<vector<int>> arr) {
    int sum1 = 0, sum2 = 0, N = arr.size();
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(i == j) sum1 += arr[i][j];
    
    int k = N-1;
    for(int i=0; i<N; i++) {        
        for(int j=N-1; j>=0; j--)
            if(k == j) sum2+=arr[i][j];
        --k;
    }

    return abs(sum1-sum2);
}
