class NumArray {
public:
    vector<int> vec;

    NumArray(vector<int>& nums) {
        vec = nums;
        vec.push_back(0);

        for (int i = 0; i < nums.size(); i++) {
            vec[i + 1] = vec[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        return vec[right + 1] - vec[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */


/*
Brute force approach:
class NumArray {
public:
    vector<int> vec;
    
    NumArray(vector<int>& nums) {
        vec = nums;        
    }
    
    int sumRange(int left, int right) {
        int count = 0;
        
        for (int i = left; i <= right; i++) {
            count += vec[i];
        }
        
        return count;
    }
};
*/
