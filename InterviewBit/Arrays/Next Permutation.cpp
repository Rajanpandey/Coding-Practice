vector<int> Solution::nextPermutation(vector<int> &nums) {
    // Find 1st id i that breaks descending order
    int i = nums.size()-2;
    while(i >= 0 && nums[i] >= nums[i+1]) {
        i--; 
    }
    
    // If not entirely descending
    if(i >= 0) {
        int j = nums.size()-1;
        while(nums[j] <= nums[i]) {
            // Find rightmost first larger id j
            j--;
        }
        swap(nums[i], nums[j]);
    }
    
    reverse(nums.begin()+i+1, nums.end());
    return nums;
}
