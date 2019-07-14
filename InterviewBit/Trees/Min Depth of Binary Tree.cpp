/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
    if(A == NULL) {
        return 0;
    }
        
    int left = minDepth(A->left);
    int right = minDepth(A->right);
    
    return (!left || !right) ? 1 + left + right : 1 + min(left, right);
}
