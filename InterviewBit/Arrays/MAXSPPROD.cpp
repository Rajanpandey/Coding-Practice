int Solution::maxSpecialProduct(vector<int> &A) {
    stack<int> myStack;
    vector<int> leftVec(A.size(), 0), rightVec(A.size(), 0);

    myStack.push(A.size()-1);
    for(int i=A.size()-2;i>=0; i--) {
        while(!myStack.empty() && A[i] > A[myStack.top()]) {
            leftVec[myStack.top()] = i;
            myStack.pop();
        }
        myStack.push(i);
    }

    myStack = stack<int>();
    myStack.push(0);
    for(int i=1; i<A.size(); i++) {
        while(!myStack.empty() and A[i] > A[myStack.top()]) {
            rightVec[myStack.top()] = i;
            myStack.pop();
        }
        myStack.push(i);
    }

    long long int ans = -1;
    for(int i=0; i<leftVec.size(); i++) {
        ans = max(ans, (long long) leftVec[i] * (long long) rightVec[i]);
    }
    return ans % 1000000007;
}