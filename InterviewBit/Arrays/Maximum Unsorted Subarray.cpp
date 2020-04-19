vector<int> Solution::subUnsort(vector<int> &A) {
    int left = -1, right = -1;

    int temp = A[0];
    for(int i=1; i<A.size(); i++) {
        if(A[i] < temp) {
            right = i;
        }
        temp = max(temp, A[i]);
    }

    temp = A[A.size()-1];
    for(int i=A.size()-1; i>=0; i--) {
        if(temp < A[i]) {
            left = i;
        }
        temp = min(temp, A[i]);
    }

    if(left == -1) {
        return {-1};
    } else {
        return {left, right};
    }
}

/* Second solution
vector<int> Solution::subUnsort(vector<int> &A) {
    int left = -1, right = -1;
    vector<int> B = A;
    sort(B.begin(), B.end());
    
    for(int i=0; i<A.size(); i++) {
        if(A[i] != B[i]) { left = i; break; }
    }

    for(int i=A.size()-1; i>=0; i--) {
        if(A[i] != B[i]) { right = i; break; }
    }
    
    if(left == -1) { 
        return {-1};
    } else { 
        return {left, right};
    }
}
*/