int Solution::removeDuplicates(vector<int> &A) {
    A.erase(unique(A.begin(), A.end()), A.end());
    return A.size();
}
