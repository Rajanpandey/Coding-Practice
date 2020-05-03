class Solution {
public:
    int romanToInt(string s) {
        int ans = 0, curr = 0, next = 0;
        map<char, int> romanValue = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };

        if(s.size() == 1) return romanValue[s[0]];
        
        for(int i=0; i<s.length()-1; i++) {
            curr = romanValue[s[i]];
            next = romanValue[s[i+1]];
            ans += (next > curr) ? -curr : curr;
        }
        ans += next;
        
        return ans;
    }
};
