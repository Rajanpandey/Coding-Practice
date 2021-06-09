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

        int reverseOrder = true;
        vector<vector<int> > ans;
        deque<TreeNode*> myQueue;
        myQueue.push_back(root);

        while (!myQueue.empty()) {
            int qSize = myQueue.size();
            vector<int> level;
            reverseOrder = !reverseOrder;

            while (qSize--) {
                if (reverseOrder) {
                    TreeNode* node = myQueue.front();
                    myQueue.pop_front();

                    level.push_back(node->val);

                    if (node->right) myQueue.push_back(node->right);
                    if (node->left) myQueue.push_back(node->left);

                } else {
                    TreeNode* node = myQueue.back();
                    myQueue.pop_back();

                    level.push_back(node->val);

                    if (node->left) myQueue.push_front(node->left);
                    if (node->right) myQueue.push_front(node->right);
                }
            }

            ans.push_back(level);
        }

        return ans;
    }
};



/*
Without using Deque:

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
 */
