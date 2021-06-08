class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        
        for(auto ch : s) {
            if(ch == '(') myStack.push(')');            
            else if (ch == '{') myStack.push('}');            
            else if (ch == '[') myStack.push(']');            
            else if(myStack.empty() || myStack.top() != ch) return false;            
            else myStack.pop();
        }
        
        return myStack.empty();
    }
};


/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        map<char, char> myMap;
        myMap[')'] = '(';
        myMap['}'] = '{';
        myMap[']'] = '[';

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                myStack.push(s[i]);
            } else {
                if (myStack.top() == myMap[s[i]]) {
                    myStack.pop();
                } else {
                    return false;
                }
            }
        }

        return myStack.empty();
    }
};
/*
