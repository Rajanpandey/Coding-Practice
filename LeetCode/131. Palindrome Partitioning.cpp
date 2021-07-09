class Solution {
public:
    bool isPalindrome(string s, int left, int right) {
        while (left <= right) {
            if (s[left++] != s[right--])
                return false;
        }
        return true;
    }
    
    void DFS (vector<vector<string>> &ans, vector<string> vec, string s, int idx) {
        if (idx == s.length()) {
            ans.push_back(vec);
            return;
        }
        
        for (int i = idx; i < s.length(); i++) {
            if (isPalindrome(s, idx, i)) {
                vec.push_back(s.substr(idx, i - idx + 1));
                DFS(ans, vec, s, i + 1);
                vec.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        if (s == "") return ans;
        
        vector<string> vec;
        DFS(ans, vec, s, 0);
        return ans;
    }
};
