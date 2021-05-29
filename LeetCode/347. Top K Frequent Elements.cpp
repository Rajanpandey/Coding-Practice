class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> myMap;
        vector<int> ans;
        
        for (auto num : nums) {
            myMap[num]++;
        }
        
        vector<vector <int> > buckets(nums.size() + 1);
        for (auto num : myMap) {
            buckets[num.second].push_back(num.first);
        }
        
        for (int i = buckets.size() - 1; i >= 0; i--) {
            for (auto num : buckets[i]) {
                ans.push_back(num);
                
                if (ans.size() == k) {
                    return ans;
                }
            }
        }
        return ans;
    }
};
