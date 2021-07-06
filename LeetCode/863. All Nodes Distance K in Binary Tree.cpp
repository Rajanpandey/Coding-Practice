/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// Recursive Solution:
class Solution {
public:
    void BFS(TreeNode* node, int k, map<TreeNode*, TreeNode*> childToParentMap, map<TreeNode*, bool>& seen, vector<int>& ans) {
        if (seen[node]) return;

        if (k == 0) {
            ans.push_back(node->val);
            return;
        }

        seen[node] = true;

        if (node->left) {
            BFS(node->left, k - 1, childToParentMap, seen, ans);
        }

        if (node->right) {
            BFS(node->right, k - 1, childToParentMap, seen, ans);
        }

        if (childToParentMap[node]) {
            BFS(childToParentMap[node], k - 1, childToParentMap, seen, ans);
        }
    }

    void mapChildToParent(TreeNode* root, map<TreeNode*, TreeNode*>& childToParentMap) {
        if (!root) return;

        if (root->left) childToParentMap[root->left] = root;
        if (root->right) childToParentMap[root->right] = root;

        mapChildToParent(root->left, childToParentMap);
        mapChildToParent(root->right, childToParentMap);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        if (k == 0) return {target->val};

        map<TreeNode*, TreeNode*> childToParentMap;
        mapChildToParent(root, childToParentMap);

        map<TreeNode*, bool> seen;

        BFS(target, k, childToParentMap, seen, ans);

        return ans;
    }
};


/* Iterative Solution with same concept:

class Solution {
public:
    void mapChildToParent(TreeNode* root, map<TreeNode*, TreeNode*>& childToParentMap) {
        if (!root) return;
        
        if (root->left) childToParentMap[root->left] = root;
        if (root->right) childToParentMap[root->right] = root;
        
        mapChildToParent(root->left, childToParentMap);
        mapChildToParent(root->right, childToParentMap);
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        if (k == 0) return {target->val};
        
        map<TreeNode*, TreeNode*> childToParentMap;
        mapChildToParent(root, childToParentMap);
        
        map<TreeNode*, bool> seen;
        queue<TreeNode*> q;
        int distance = 0;
        
        while (distance != k) {
            q.push(target);
            seen[target] = true;
            
            int qSize = q.size();
            for (int i = 0; i < qSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                if (node->left && !seen[node->left]) {
                    q.push(node->left);
                    seen[node->left] = true;
                }
                if (node->right && !seen[node->right]) {
                    q.push(node->right);
                    seen[node->right] = true;
                }
                if (childToParentMap[node] && !seen[childToParentMap[node]]) {
                    q.push(childToParentMap[node]);
                    seen[childToParentMap[node]] = true;
                }
            }
            distance++;
        }
        
        while (!q.empty()) {
            ans.push_back(q.front()->val);
            q.pop();
        }
        
        return ans;
    }
};

*/
