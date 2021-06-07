class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits == "") return {};

        vector<string> ans {""};
        vector<string> mapping {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        for (auto digit : digits) {
            vector<string> temp;

            for (auto prevChars : ans) {
                for (auto currChars : mapping[digit - '2']) {
                    temp.push_back(prevChars + currChars);
                }
            }

            ans = temp;
        }
        
        return ans;
    }
};
