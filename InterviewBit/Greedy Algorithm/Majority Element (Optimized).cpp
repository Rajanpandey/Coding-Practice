int Solution::majorityElement(const vector<int> &A) {
    int count = 0;
    int ans = 0;
    
    for(int i=0; i<A.size(); i++) {
        if(count == 0) {
            ans = A[i];
            count = 1;
        } else {
            if(A[i] == ans) {
                count++;
            } else {
                count--;
            }
        }
    }
    return ans;
}
