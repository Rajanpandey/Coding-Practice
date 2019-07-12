int Solution::longestConsecutive(const vector<int> &A) {
    int ans = INT_MIN;
    unordered_set<int> hash;
    
    for(int i=0; i<A.size(); i++){
        hash.insert(A[i]);
    }
    
    for(int i=0; i<A.size(); i++){
        int j = 1, count = 1;
        if(hash.find(A[i]-1) == hash.end()) {
            while(hash.find(A[i]+j) != hash.end()) {
                j++;
                count++;
            }
            ans = max(count, ans);
        }
    }
    return ans;
}
