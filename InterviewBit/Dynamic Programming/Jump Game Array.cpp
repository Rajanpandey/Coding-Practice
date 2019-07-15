int Solution::canJump(vector<int> &A) {
    int N = A.size();
    int reach = 0;
    for(int i=0; i<N; i++){
        if(i <= reach){
            reach = max(reach, i+A[i]);
        } else {
            break;
        }
    }
    return reach >= N-1;
}
