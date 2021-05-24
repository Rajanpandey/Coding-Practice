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
        int N = nums.size();

        reverse(nums, nums + N - k);
        reverse(nums + N - k, nums + N);
        reverse(nums, nums + N);
    }

*/
