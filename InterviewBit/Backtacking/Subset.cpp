void backtrack(vector<int> &A, int curr, vector<vector<int>> &ans, vector<int> &temp) {
    ans.push_back(temp);
    for(int i=curr; i<A.size(); i++) {
        temp.push_back(A[i]);
        backtrack(A, i+1, ans, temp);
        temp.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(), A.end());
    
    vector<vector<int>> ans;
    vector<int> temp;
    
    backtrack(A, 0, ans, temp);
    
    return ans;
}