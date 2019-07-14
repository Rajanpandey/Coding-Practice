/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> stack;
    
    stack.push(A);
    while(!stack.empty()) {
        TreeNode* temp = stack.top();
        ans.push_back(temp->val);
        stack.pop();
        
        if(temp->left != NULL) {
            stack.push(temp->left);
        }
        if(temp->right != NULL) {
            stack.push(temp->right);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
