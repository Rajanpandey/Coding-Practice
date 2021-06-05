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

/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalProduct = 1, zeroCount = 0;
        vector<int> ans(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                totalProduct *= nums[i];
            } else {
                zeroCount++;
            }
        }

        if (zeroCount > 1) {
            return ans;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                ans[i] = zeroCount ? 0 : totalProduct / nums[i];
            } else {
                ans[i] = totalProduct;
            }
        }

        return ans;
    }
};
/*
