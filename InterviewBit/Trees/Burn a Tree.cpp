/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Triplet {
public:
    int max, above, below;

    Triplet(int max, int above, int below) {
        this->max = max;
        this->above = above;
        this->below = below;
    }
};

Triplet timeToBurnTreeHelper(TreeNode* root, int start) {
    if (!root) {
        return Triplet(-1, -1, 0);
    }

    Triplet left = timeToBurnTreeHelper(root->left, start);
    Triplet right = timeToBurnTreeHelper(root->right, start);

    Triplet ans = Triplet(-1, -1, 0);

    // Node is the starting node
    if (root->val == start) {
        int below = max(left.below, right.below);
        ans.max = below;
        ans.above = 0;
        ans.below = below;
    }
    
    // Starting Node is in left subtree
    else if (left.above != -1) {
        ans.max = max(left.max, max(left.below, left.above + right.below + 1));
        ans.above = left.above + 1;
        ans.below = left.below;
    }
    
    // Starting Node is in right subtree
    else if (right.above != -1) {
        ans.max = max(right.max, max(right.below, right.above + left.below + 1));
        ans.above = right.above + 1;
        ans.below = right.below;
    }
    
    // Starting Node doesn't exist in the subtree
    else {
        ans.max = -1;
        ans.above = -1;
        ans.below = max(left.below, right.below) + 1;
    }

    return ans;
}

int Solution::solve(TreeNode* A, int B) {
    Triplet ans = timeToBurnTreeHelper(A, B);
    return ans.max;
}
