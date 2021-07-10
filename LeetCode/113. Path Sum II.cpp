/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void backtracking(vector<vector<int>>& ans, vector<int> arr, TreeNode* node, int targetSum) {
        if (!node) {
            return;
        }
        
        arr.push_back(node->val);
        
        if (!node->left && !node->right && node->val == targetSum) {
            ans.push_back(arr);
        }
        
        backtracking(ans, arr, node->left, targetSum - node->val);
        backtracking(ans, arr, node->right, targetSum - node->val);
        
        arr.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        backtracking(ans, {}, root, targetSum);
        return ans;
    }
};
