vector<int> Solution::dNums(vector<int> &A, int B) {
    vector<int> ans;
    unordered_map <int, int> map1;
    
    for(int i=0; i<A.size(); i++) {
        map1[A[i]]++;
        if(i-B+1>=0) {
            ans.push_back(map1.size());
            map1[A[i-B+1]]--;
            
            if(map1[A[i-B+1]] == 0) {
                map1.erase(A[i-B+1]);
            }
        }
    }
    return ans;
}
