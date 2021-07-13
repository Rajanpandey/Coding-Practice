/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int maxDepth(TreeNode* node) {
    if (!node) return 0;
    return 1 + max(maxDepth(node->left), maxDepth(node->right));
}

int traverse(TreeNode* node, int target, int &ans) {
    if (!node) return 0;

    // Target found, hence returning distance 1 from it, and updating ans to max of depth from target node
    if (node->data == target) {
        ans = max(maxDepth(node->left), maxDepth(node->right));
        return 1;
    }

    int currTime = traverse(node->left, target, ans);
    // If currTime != 0, then target was found at distance = currTime
    if (currTime) {
        // Finding max depth on right, as target was on left
        ans = max(ans, currTime + maxDepth(node->right));
        return currTime + 1;
    }

    currTime = traverse(node->right, target, ans);
    if (currTime) {
        ans = max(ans, currTime + maxDepth(node->left));
        return currTime + 1;
    }

    return 0;
}

int Solution::solve(TreeNode* root, int target) {
    int ans = 0;
    traverse(root, target, ans);
    return ans;
}
