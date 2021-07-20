class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ans = 0;

        for (int num : nums) {
            if (count == 0) {
                ans = num;
            }
            count += (num == ans) ? 1 : -1;
        }

        return ans;
        
    }
};
