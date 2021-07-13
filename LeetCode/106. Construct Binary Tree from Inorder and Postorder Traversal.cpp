/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int, int> inorderMap;
    
    TreeNode* DFS(vector<int>& inorder, int ileft, int iright, vector<int>& postorder, int pleft, int pright) {
        if(ileft > iright) {
            return NULL;
        }
        
        // root value
        int val = postorder[pright];
        TreeNode *root = new TreeNode(val);
        
        if(ileft == iright) return root;
        
        int iroot = inorderMap[val];
        int nleft = iroot - ileft;  // length of left subtree
        root->right = DFS(inorder, iroot + 1, iright, postorder, pleft + nleft, pright - 1);
        root->left = DFS(inorder, ileft, iroot - 1, postorder, pleft, pleft + nleft - 1);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        
        for (int i = 0; i < n; i++) {
            inorderMap[inorder[i]] = i;
        }
        
        return DFS(inorder, 0, n - 1, postorder, 0, n - 1);
        
    }
};
