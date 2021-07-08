class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26);
        
        for (auto ch : tasks) {
            freq[ch - 'A']++;
        }
        
        sort(freq.begin(), freq.end());
        
        int maxVal = freq[25] - 1;
        int idleSlots = maxVal * n;
        
        for (int i = 24; i >= 0; i--) {
            idleSlots -= min(freq[i], maxVal);
        }
        
        return idleSlots > 0 ? idleSlots + tasks.size() : tasks.size();
    }
};
