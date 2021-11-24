class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0, end;
        
        for (end = 0; end < nums.size(); end++) {
            if (nums[end] == 0) {
                k--;
            }
            
            if (k < 0) {
                start++;
                if (nums[start] == 0) {
                    k++;
                }
            }
        }
        return end - start;
    }
};
