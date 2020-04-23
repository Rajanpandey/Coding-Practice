class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return mirror(root, root);
    }
    
    bool mirror(TreeNode* head1, TreeNode* head2) {
        if(head1 == NULL && head2 == NULL) { return 1; }
        if(head1 == NULL || head2 == NULL) { return 0; }
        return (head1->val == head2->val) && mirror(head1->left, head2->right) && mirror(head1->right, head2->left);
    }
};
