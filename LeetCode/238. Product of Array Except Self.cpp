class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left = 1, right = 1, n = nums.size();
        vector<int> ans(n, 1);

        for (int i = 0; i < n; i++) {
            ans[i] *= left;
            left *= nums[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
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
