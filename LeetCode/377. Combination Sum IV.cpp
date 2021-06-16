

/*
Recursive solution: Gives TLE:
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        if (target == 0) {
            return 1;
        }
        
        int ans = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (target >= nums[i]) {
                ans += combinationSum4(nums, target - nums[i]);
            }
        }
        
        return ans;
    }
};
/*
