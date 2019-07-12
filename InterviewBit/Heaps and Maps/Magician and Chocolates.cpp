int Solution::nchoc(int A, vector<int> &B) {
    long long int ans = 0;
    priority_queue<int> q(B.begin(), B.end());

    while(A--){
        long long int top = q.top();
        
        ans = (ans + top) % 1000000007;
        q.pop();
        q.push(top/2);
    }
    return ans;
}
