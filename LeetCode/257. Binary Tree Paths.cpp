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
    vector<string> ans;
    
    void DFS(TreeNode* node, string str) {
        if (!node) return;
        
        str += (str == "") ? to_string(node->val) : "->" + to_string(node->val);
        
        if (!node->left && !node->right) {
            ans.push_back(str);
            return;
        }
        
        DFS(node->left, str);
        DFS(node->right, str);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        DFS(root, "");
        return ans;
    }
};
