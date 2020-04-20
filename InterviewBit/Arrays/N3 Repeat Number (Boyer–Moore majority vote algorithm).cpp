int Solution::repeatedNumber(const vector<int> &A) {
    int N = A.size(), count1 = 0, count2 = 0, first = 0, second = 0;

    if(N/3 == 0) { return A[0]; }

    for(int i=0; i<N; i++) {
        if(A[i] == first) {
            count1++;
        }
        else if(A[i] == second) {
            count2++;
        }

        else if(count1 == 0) {
            count1 = 1;
            first = A[i];
        }
        else if(count2 == 0) {
            count2 = 1;
            second = A[i];
        }

        else {
            count1--;
            count2--;
        }
    }

    count1 = 0, count2 = 0;
    for(int i=0; i<N; i++) {
        if(A[i] == first) { count1++; }
        if(A[i] == second) { count2++; }
    }

    if(count1 > N/3) { return first; }
    else if(count2 > N/3) { return second; }
    return -1;
}
