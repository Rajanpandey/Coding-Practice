int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_set<int> st;
    
    for(int i=0; i<A.size(); i++) {
        int Aj = A[i] - B;
        int Ai = A[i] + B;
        
        // find returns end iterator if key is not found
        if (st.find(Aj) != st.end()) {
            return 1;
        }
        if (st.find(Ai) != st.end()) {
            return 1;
        }
        
        st.insert(A[i]);
    }
    return 0;
}
