class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        map<int, int> myMap;
        
        for (auto num : nums) {
            if (!myMap[num]) {
                int left = myMap[num - 1] ? myMap[num - 1] : 0;
                int right = myMap[num + 1] ? myMap[num + 1] : 0;

                int sequenceLength = left + right + 1;
                myMap[num] = sequenceLength;

                ans = max(ans, sequenceLength);

                myMap[num - left] = sequenceLength;
                myMap[num + right] = sequenceLength;
            }
        }
        
        return ans;
    }
};
