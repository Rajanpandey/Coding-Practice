string Solution::reverseString(string A) {
    string ans = "";
    stack<char> myStack;
    
    for(auto i:A) {
        myStack.push(i);
    }
    
    while(!myStack.empty()) {
        ans += myStack.top();
        myStack.pop();
    }
    return ans;
}
