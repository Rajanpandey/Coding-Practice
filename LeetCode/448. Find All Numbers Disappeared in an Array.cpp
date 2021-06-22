// O(1) Space solution:
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int currValue = nums[i];

            if (currValue < 0)
                currValue *= -1;

            if (nums[currValue - 1] > 0)
                nums[currValue - 1] *= -1;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                ans.push_back(i + 1);
        }

        return ans;
    }
};

/*
Same solution but shorter:
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
            if (nums[abs(nums[i]) - 1] > 0)
                nums[abs(nums[i]) - 1] *= -1;

        for (int i = 0; i < nums.size(); i++)
            if (nums[i] > 0)
                ans.push_back(i + 1);

        return ans;
    }
};

O(N) Space solution:

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> present(n, false);
        vector<int> ans;

        for (auto num : nums) {
            present[num - 1] = true;
        }

        for (int i = 0; i < n; i++) {
            if (!present[i])
                ans.push_back(i + 1);
        }

        return ans;
    }
};
*/
