class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        int maxProd = 1, minProd = 1;

        for (int num : nums) {
            if (num < 0) {
                swap(maxProd, minProd);
            }

            maxProd = max(maxProd * num, num);
            minProd = min(minProd * num, num);

            ans = max(ans, maxProd);
        }

        return ans;
    }
};
