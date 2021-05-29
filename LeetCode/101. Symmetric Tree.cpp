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
    bool symmetric(TreeNode* A, TreeNode* B) {
        if (!A && !B) return true;

        if (!A || !B) return false;

        return (A->val == B->val) && symmetric(A->left, B->right) && symmetric(A->right, B->left);
    }

    bool isSymmetric(TreeNode* root) {
        return symmetric(root, root);
    }
};
