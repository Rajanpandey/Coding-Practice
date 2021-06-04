class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int curr = 0, next = 0;

        map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        if (s.length() == 1) return roman[s[0]];

        for (int i = 0; i < s.length() - 1; i++) {
            curr = roman[s[i]];
            next = roman[s[i + 1]];

            if (curr < next) {
                ans -= curr;
            } else {
                ans += curr;
            }
        }

        ans += next;
        
        return ans;
    }
};
