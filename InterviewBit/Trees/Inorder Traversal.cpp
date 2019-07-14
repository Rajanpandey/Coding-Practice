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
    stack<TreeNode*> st;
    
    while(!st.empty() || A) {
        while(A != NULL) {
            st.push(A);
            A = A->left;
        }
        
        A = st.top();
        ans.push_back(A->val);
        st.pop();
        A = A->right;
    }
    return ans;
}
