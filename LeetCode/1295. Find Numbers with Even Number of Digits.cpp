class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        
        for (auto num : nums) {
            int numLength = 0;
            
            while (num) {
                numLength++;
                num /= 10;
            }
            
            if (numLength % 2 == 0) ans++;
        }
        
        return ans;
    }
};
