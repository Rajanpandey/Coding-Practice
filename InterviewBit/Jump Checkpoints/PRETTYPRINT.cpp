vector<vector<int> > Solution::prettyPrint(int A) {
    int size = 2*A-1;
    int left = 0;
    int right = size;
    
    vector<vector<int>> ans(size, vector<int>(size));

    while(A>0){
        for(int i=left; i<right; i++) {
            for(int j=left; j<right; j++) {
                ans[i][j] = A;
            }
        }
        A--;
        left++;
        right--;
    }

    return ans;
}