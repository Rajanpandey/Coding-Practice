class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    
        vector<int> ans;
        priority_queue<int> pq;
        
        for (auto num : nums) {
            pq.push(num);
        }
        
        while (--k > 0) {
            pq.pop();
        }
        
        return pq.top();
    }
};
