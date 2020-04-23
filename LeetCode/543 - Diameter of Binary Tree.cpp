/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans = 1;
    int diameterOfBinaryTree(TreeNode* root) {
        depthOfTree(root);
        return ans-1;
    }
    
    int depthOfTree(TreeNode* node) {
        if(node == NULL) { return 0; }
        int L = depthOfTree(node->left);
        int R = depthOfTree(node->right);
        ans = max(ans, L+R+1);
        return max(L, R)+1;
    }
};