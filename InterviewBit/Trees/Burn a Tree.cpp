/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int maxDepth(TreeNode* node) {
     if (!node) return 0;
     return 1 + max(maxDepth(node->left), maxDepth(node->right));
 }

int traverse(TreeNode* node, int target, int &ans) {
    if (!node) return 0;

    if (node->val == target) return 1;

    int val = traverse(node->left, target, ans);
    if (val) {
        ans = max(ans, val + maxDepth(node->right));
        return val + 1;
    }

    val = traverse(node->right, target, ans);
    if (val) {
        ans = max(ans, val + maxDepth(node->left));
        return val + 1;
    }

    return 0;
}

int Solution::solve(TreeNode* root, int target) {
    int ans = 0;
    traverse(root, target, ans);
    return ans;
}
