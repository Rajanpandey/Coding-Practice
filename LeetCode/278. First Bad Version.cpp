// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, hi = n;

        while (low < hi) {
            int mid = low + (hi - low) / 2;

            if (isBadVersion(mid)) {
                hi = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
