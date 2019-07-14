int Solution::maxp3(vector<int> &A) {
    int n = A.size();
    
    int maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;
    int minA = INT_MAX, minB = INT_MAX;
 
    for (int i=0; i<n; i++) {
        if (A[i] > maxA) {
            maxC = maxB;
            maxB = maxA;
            maxA = A[i];
        } else if (A[i] > maxB) {
            maxC = maxB;
            maxB = A[i];
        } else if (A[i] > maxC) {
            maxC = A[i];
        }
 
        if (A[i] < minA) {
            minB = minA;
            minA = A[i];
        } else if(A[i] < minB) {
            minB = A[i];
        }
    }

    // either 2 min (both -ve makes it +ve) and 1 max or all 3 max is the biggest
    return max(minA*minB*maxA, maxA*maxB*maxC); ?
}
