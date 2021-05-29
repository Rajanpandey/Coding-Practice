class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int target = m + n - 1; target >= 0; target--) {
            if (n > 0) {
                if (m && nums1[m - 1] > nums2[n - 1]) {
                    nums1[target] = nums1[m - 1];
                    m--;
                } else {
                    nums1[target] = nums2[n - 1];
                    n--;
                }
            }
        }
    }
};
