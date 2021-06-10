class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, temp = 0;
        
        for (auto num : nums) {
            if (num) {
                temp++;
            } else {
                ans = max(ans, temp);
                temp = 0;
            }
        }
        
        return max(ans, temp);
    }
};
