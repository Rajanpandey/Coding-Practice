class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> myMap;

        for(auto num : nums1) {
            myMap[num]++;
        }

        for(auto num : nums2) {
            if (myMap[num]) {
                myMap[num]--;
                ans.push_back(num);
            }
        }

        return ans;
    }
};
