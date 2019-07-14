/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(TreeNode* A, vector<int> &vec) {
    if (!A) {
        return;
    }
    inorder(A->left, vec);
    inorder(A->right, vec);
    vec.push_back(A->val);
}

int Solution::kthsmallest(TreeNode* A, int B) {
    vector<int> vec;
    
    inorder(A, vec);
    unique(vec.begin(), vec.end());
    sort(vec.begin(), vec.end());
    return vec[B-1];

}
