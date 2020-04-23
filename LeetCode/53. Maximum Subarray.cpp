class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, sum = 0;
        for(auto i:nums) {
            sum += i;
            ans = max(sum, ans);
            if(sum < 0) { sum=0; }
        }
        return ans;
    }
};