int Solution::isValid(string A) {
    stack<char> mySt;
    map<char, char> matchingBracket; 
    matchingBracket['{'] = '}';
    matchingBracket['['] = ']';
    matchingBracket['('] = ')';
    
    for(int i=0; i<A.size(); i++) {
        if(A[i] == '(' || A[i] == '[' || A[i] == '{') {
            mySt.push(A[i]);
        }
        else if (mySt.empty() || matchingBracket[mySt.top()] != A[i]) {
            return false;
        } else {
            mySt.pop();
        }
    }
    return mySt.empty();
}
