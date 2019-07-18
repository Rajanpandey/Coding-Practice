int Solution::jump(vector<int> &A) {
    if(A.size() <= 1) {
        return 0;
    }
    int maxReachPos = A[0];
    int curMaxReachPos = A[0];
    int curStep = 1;
    
    for(int i=1; i<=maxReachPos; i++) {
        if(i == A.size()-1){
            return curStep;
        }
        curMaxReachPos = max(curMaxReachPos, i + A[i]);
        if(i == maxReachPos){
            if(curMaxReachPos <= i) {
                return -1;
            }
            maxReachPos = curMaxReachPos;
            curStep++;
        }
    }
    return -1;
}
