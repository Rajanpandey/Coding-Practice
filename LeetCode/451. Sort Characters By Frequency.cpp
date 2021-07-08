class Solution {
public:
    string frequencySort(string s) {
        string ans;
        map<char, int> freq;
        vector<string> bucket(s.size() + 1, "");
        
        for (auto ch : s) {
            freq[ch]++;
        }
        
        for (auto it : freq) {
            int noOfOccurence = it.second;
            char ch = it.first;

            for (int i = 0; i < noOfOccurence; i++) {
                bucket[noOfOccurence] += ch;
            }
        }
        
        for(int i = s.size(); i > 0; i--) {
            if (!bucket[i].empty()) {
                ans += bucket[i];
            }
        }
        
        return ans;
    }
};
