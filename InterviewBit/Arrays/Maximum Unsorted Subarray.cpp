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
