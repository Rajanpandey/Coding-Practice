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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};

        int reverseOrder = false;
        vector<vector<int> > ans;
        queue<TreeNode*> myQueue;
        myQueue.push(root);

        while (!myQueue.empty()) {
            int qSize = myQueue.size();
            vector<int> level(qSize);

            for (int i = 0; i < qSize; i++) {
                TreeNode* node = myQueue.front();
                myQueue.pop();

                if (reverseOrder) {
                    level[qSize - 1 - i] = node->val;
                } else {
                    level[i] = node->val;
                }

                if (node->left) myQueue.push(node->left);
                if (node->right) myQueue.push(node->right);
            }

            ans.push_back(level);
            reverseOrder = !reverseOrder;
        }

        return ans;
    }
};

/*
With using Reverse:

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};
        
        int reverseOrder = true;
        vector<vector<int> > ans;
        queue<TreeNode*> myQueue;
        myQueue.push(root);
        
        while (!myQueue.empty()) {
            int qSize = myQueue.size();
            vector<int> level;
            
            reverseOrder = !reverseOrder;
            
            for (int i = 0; i < qSize; i++) {
                TreeNode* node = myQueue.front();
                myQueue.pop();
                
                level.push_back(node->val);
                
                if (node->left) myQueue.push(node->left);
                if (node->right) myQueue.push(node->right);
            }
            
            if (reverseOrder) reverse(level.begin(), level.end());
            ans.push_back(level);
        }  
        
        return ans;
    }
};
 */
