class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int N = nums.size();
        vector<int> newArr(N);

        for (int i = 0; i < N; i++) {
            // For left rotation: newLocation = (i + (N - k)) % N;
            // For right rotation: newLocation = (i + k) % N;
            int newLocation = (i + k) % N;
            newArr[newLocation] = nums[i];
        }

        nums = newArr;
    }
};

/*
O(1) Space Complexity solution:

    void rotate(vector<int>& nums, int k) {
        k %= nums.size();

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }

*/
