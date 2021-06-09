class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp {{1}, {1, 1}};
        
        if (numRows == 1) return {{1}};
        if (numRows == 2) return dp;
        
        for (int i = 3; i <= numRows; i++) {
            vector<int> vec = {1};
            
            vector<int> lastDPArr = dp[dp.size() - 1];
            for (int j = 0; j < lastDPArr.size() - 1; j++) {
                vec.push_back(lastDPArr[j] + lastDPArr[j + 1]);
            }
            
            vec.push_back(1);
            dp.push_back(vec);
        }
        
        return dp;
    }
};
