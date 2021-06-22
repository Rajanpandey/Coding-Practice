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
            if (!present[i]) {
                ans.push_back(i + 1);
            }
        }
        
        return ans;
    }
};
