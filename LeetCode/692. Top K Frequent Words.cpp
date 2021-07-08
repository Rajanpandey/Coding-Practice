class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> freq;
        for (auto word : words) {
            freq[word]++;
        }
        
        vector<vector<string>> bucket(words.size());
        for (auto it : freq) {
            bucket[it.second].push_back(it.first);
        }
        
        vector<string> ans;
        for (int i = bucket.size() - 1; i >= 0; i--) {
            sort(bucket[i].begin(), bucket[i].end());
            for (auto itr : bucket[i]) {
                ans.push_back(itr);
                k--;
                if (k == 0) {
                    return ans;
                }
            }
        }
        
        return ans;
    }
};
