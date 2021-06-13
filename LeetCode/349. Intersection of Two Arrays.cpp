class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> mySet(nums1.begin(), nums1.end());
        
        
        for (auto num : nums2) {
            if (mySet.erase(num)) {
                ans.push_back(num);
            }
        }
        
        return ans;
    }
};
