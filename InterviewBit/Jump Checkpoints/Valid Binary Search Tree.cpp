/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int checkValid(TreeNode* A, int min, int max) {
    if(!A) {
        return 1;
    } else if(A->val < max && A->val > min && 
        checkValid(A->left, min, A->val) && checkValid(A->right, A->val, max)) {
        return 1;
    }
    return 0;
} 

int Solution::isValidBST(TreeNode* A) {
    return checkValid(A, INT_MIN, INT_MAX);
}
