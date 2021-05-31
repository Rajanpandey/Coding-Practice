// O(n) solution:
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        
        while ((lo < nums.size() && hi >= 0) && (nums[lo] != target || nums[hi] != target)) {
            if (nums[lo] != target) {
                lo++;
            }
            if (nums[hi] != target) {
                hi--;
            }
        }
        
        if (lo > hi) {
            return {-1, -1};
        }
        
        return {lo, hi};
    }
};

/* One binary search solution:
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) return {-1, -1};

        int i = 0, j = nums.size() - 1;

        while (i < j) {
            int mid = (i + j) / 2;
            if (nums[mid] < target) {
                i = mid + 1;
            }
            else {
                j = mid;
            }
        }

        if (nums[i] != target) return {-1, -1};

        j = i;
        while (i > 0 || j < nums.size() - 1) {
            if (i > 0 && nums[i - 1] == target) {
                i--;
            }
            else if (j < nums.size() - 1 && nums[j + 1] == target) {
                j++;
            } else {
                break;
            }
        }

        return {i, j};
    }
};
*/
