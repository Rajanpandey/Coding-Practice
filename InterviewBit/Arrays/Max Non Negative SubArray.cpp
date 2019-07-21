vector<int> Solution::maxset(vector<int> &A) {
    int x=0, y=0, maxX=0, maxY=0;
    long long sum=0, maxSum=0;

    for(int i=0; i<A.size(); i++) {
        if(A[i] >= 0) {
            sum += A[i];
            y += 1;
            if(sum>maxSum || maxSum>=sum && maxX==x) {
                maxSum = sum;
                maxX = x;
                maxY = y;
            }
        } else {
            x = i+1;
            y = i+1;
            sum = 0;
        }
    }
    
    vector<int> ans(A.begin()+maxX, A.begin()+maxY);
    return ans;
}
