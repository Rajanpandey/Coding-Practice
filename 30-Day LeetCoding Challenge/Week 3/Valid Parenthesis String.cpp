class Solution {
public:
    bool checkValidString(string s) {
        int minDiff = 0, maxDiff = 0;
        for(auto ch : s) {
            maxDiff += (ch == '(' || ch == '*') ? 1 : -1;
            minDiff += (ch == ')' || ch == '*') ? -1 : 1;
            if(maxDiff < 0) { return false; }
            minDiff = max(0, minDiff);
        }
        return minDiff == 0;
    }
};
