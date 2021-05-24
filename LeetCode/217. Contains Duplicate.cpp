class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> myMap;

        for (auto num : nums) {
            if (myMap[num]) {
                return true;
            } else {
                myMap[num] += 1;
            }
        }

        return false;
    }
};
