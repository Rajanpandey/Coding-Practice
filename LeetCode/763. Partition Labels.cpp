class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> map(26);
        for (int i = 0; i < s.length(); i++) {
            map[s[i] - 'a'] = i;
        }
        
        vector<int> ans;
        int start = 0, last = 0;
        for (int i = 0; i < s.length(); i++) {
            last = max(last, map[s[i] - 'a']);
            if (last == i) {
                ans.push_back(last - start + 1);
                start = last + 1;
            }
        }
        return ans;
    }
};
