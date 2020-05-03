class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x && x%10 == 0)) return false;
        
        int halfReversed = 0;
        
        while(x > halfReversed) {
            halfReversed = halfReversed*10 + x%10;
            x /= 10;
        }
        
        return halfReversed == x || halfReversed/10 == x;
    }
};
