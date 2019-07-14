/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> stack;
    
    while(!stack.empty() || A) {
        if(A != NULL) {
            ans.push_back(A->val);
            if(A->right != NULL) {
                stack.push(A->right);
            }
            A = A->left;
        } else {
            A = stack.top();
            stack.pop();
        }
    }
    
    return ans;
}