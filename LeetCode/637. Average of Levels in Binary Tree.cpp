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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            double average = 0.0;
            int qSize = q.size();
            
            for (int i = 0; i < qSize; i++) {
                TreeNode* curr = q.front();
                q.pop();
                
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
                average += curr->val;
            }
            
            ans.push_back(average / qSize);
        }
        
        return ans;
    }
};
