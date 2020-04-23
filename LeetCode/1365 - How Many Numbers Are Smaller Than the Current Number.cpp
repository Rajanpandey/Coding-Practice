class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        vector<int> A = nums;
        sort(A.begin(), A.end());
        
        for (int i = 0; i < nums.size(); i ++) {
            ans.push_back(distance(A.begin(), find(A.begin(), A.end(), nums[i])));
        }
                          
        return ans;
    }
};
