std::string reverseInParentheses(std::string inputString) {
    string ans;
    stack<int> parenthesesOpened;

    for (int i = 0; i < inputString.length(); ++i) {
        if (inputString[i] == '(')
            parenthesesOpened.push(ans.length());
        else if (inputString[i] == ')') {
            int j = parenthesesOpened.top();
            parenthesesOpened.pop();
            reverse(ans.begin() + j, ans.end());
        } else {
            ans += inputString[i];
        }
    }

    return ans;
}
