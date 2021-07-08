class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> table = { {0, -1} };
        int ans = 0, partial_sum = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            partial_sum += nums[i] ? 1 : -1;
            if (table.count(partial_sum)) {
                ans = max(ans, i - table[partial_sum]);
            } else {
                table[partial_sum] = i;
            }
        }
        return ans;
    }
};
