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
    vector<int> vec;
    
    void findPath(TreeNode* node, int num) {
        if (!node) return;
        
        if (!node->left && !node->right) {
            vec.push_back(num * 10 + node->val);
        }
        
        findPath(node->left, num * 10 + node->val);
        findPath(node->right, num * 10 + node->val);
    }
    
    int sumNumbers(TreeNode* root) {
        findPath(root, 0);
        
        int ans = 0;
        for (auto i : vec) ans += i;
        return ans;
    }
};
