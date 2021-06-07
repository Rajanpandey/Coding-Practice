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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};
        
        vector<vector<int> > ans;
        queue<TreeNode*> queue;
        queue.push(root);
        
        while (!queue.empty()) {
            int qSize = queue.size();
            vector<int> currLevel;
            
            for (int i = 0; i < qSize; ++i) {
                TreeNode *node = queue.front();
                queue.pop();
                currLevel.push_back(node->val);
                
                if (node->left)  queue.push(node->left);
                if (node->right) queue.push(node->right);
            }
            
            ans.push_back(currLevel);
        }
        
        return ans;
    }
};
