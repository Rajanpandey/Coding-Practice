vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> ans(A, vector<int>(A, 0));
    int i = 0;
    int j, k = 1;
    
    while(k <= A*A) {
        //left to right
        j = i;      
        while(j < A-i) {
            ans[i][j++] = k++;
        }     

        //top to bottom   
        j = i+1;
        while(j < A-i) {
            ans[j++][A-i-1] = k++;
        }
        
        //right to left 
        j = A-i-2;
        while(j > i) {
            ans[A-i-1][j--] = k++;
        }
        
        //bottom to  top 
        j = A-i-1;
        while(j > i) {
            ans[j--][i] = k++;
        }
        
        // next loop
        i++;
    }
    
    return ans;
}
