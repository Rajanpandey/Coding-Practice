void Solution::reverseWords(string &A) {
    stack<string> myStack;
    string str = "";
    
    for(int i=0; i<A.length(); i++) {
        if(A[i] == ' ') {
            myStack.push(str); 
            str = "";
        } else {
            str += A[i];
        }
    }
    myStack.push(str);
    
    A = "";
    while(!myStack.empty()) {
        A += myStack.top();
        myStack.pop();
        
        if(myStack.size() > 0) {
            A += " ";
        }
    }
}
