vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> ans(A, vector<int>(A, 0));
    int i = 0, j, k = 1;
    
    while(k <= A*A) {
        //1. horizonal, left to right
        j = i;      
        while(j < A-i) {
            ans[i][j++] = k++;
        }     

        //2. vertical, top to bottom   
        j = i+1;
        while(j < A-i) {
            ans[j++][A-i-1] = k++;
        }
        
        //3. horizonal, right to left 
        j = A-i-2;
        while(j > i) {
            ans[A-i-1][j--] = k++;
        }
        
        //4. vertical, bottom to  top 
        j = A-i-1;
        while(j > i) {
            ans[j--][i] = k++;
        }
        
        // next loop
        i++;
    }
    
    return ans;
}
