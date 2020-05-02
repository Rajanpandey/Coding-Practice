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
    int maxPathSum(TreeNode* root) {
        int maxPath = root->val;
        dfs(root, maxPath);
        return maxPath;
    }
    
    int dfs(TreeNode* node, int &maxPath) {
        if(!node) return 0;
        int L = max(0, dfs(node->left, maxPath));
        int R = max(0, dfs(node->right, maxPath));
        maxPath = max(maxPath, L + R + node->val);
        return node->val + max(L, R);
    }
};
