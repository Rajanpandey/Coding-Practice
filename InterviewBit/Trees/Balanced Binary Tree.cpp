/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int dfs_height(TreeNode *A) {
    if(A == NULL) {
        return 0;
    }
    
    int lft = dfs_height(A->left);
    int rgt = dfs_height(A->right);
    
    if(lft == -1 || rgt == -1 || abs(lft-rgt) > 1) {
        return -1;
    }
    
    return 1 + max(lft, rgt);
} 

int Solution::isBalanced(TreeNode* A) {
    return dfs_height(A) != -1;
}
