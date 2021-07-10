class Solution {
public:
    bool canPartition(vector<int>& nums, vector<bool>& visited, int target, int k, int start, int currSum) {
        if (k == 1) return true;
        
        if (currSum == target) {
            return canPartition(nums, visited, target, k - 1, 0, 0);
        }
        
        for (int i = start; i < nums.size(); i++) {
            if (!visited[i]) {
                visited[i] = true;
                if (canPartition(nums, visited, target, k, i + 1, currSum + nums[i])) {
                    return true;
                }
                visited[i] = false;
            }
        }
        return false;
    }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % k != 0) return false;
        
        vector<bool> visited(nums.size());
        return canPartition(nums, visited, sum / k, k, 0, 0);
    }
};
