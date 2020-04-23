class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left = 1, right = 1;
        vector<int> ans(nums.size(), 1);
        
        for(int i=1; i<nums.size(); i++) { 
            ans[i] *= (left *= nums[i-1]);
            ans[nums.size()-1 - i] *= (right *= nums[nums.size() - i]);
        }
        return ans;
    }
};
