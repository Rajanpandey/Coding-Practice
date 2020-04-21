int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    for(auto row : A) {
        if(row[0] <= B && row[row.size()-1] >= B) {
            return binary_search(row.begin(), row.end(), B);
        }
    }
    return 0;
}
