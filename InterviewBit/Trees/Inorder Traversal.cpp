/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> stack;
    
    while(!stack.empty() || A) {
        while(A != NULL) {
            stack.push(A);
            A = A->left;
        }
        
        A = stack.top();
        ans.push_back(A->val);
        stack.pop();
        A = A->right;
    }
    return ans;
}
