/**
 * Definition for binary tree
 * startruct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<TreeNode*> generate(int start, int end) {
    vector<TreeNode*> vec;

    if(start > end) {
        vec.push_back(NULL);
        return vec;
    }

    if(start == end) {
        vec.push_back(new TreeNode(start));
        return vec;
    }

    for(int i=start; i<=end; i++) {
        vector<TreeNode*> lft = generate(start, i-1);
        vector<TreeNode*> rgt = generate(i+1, end);

        for(auto l:lft) {
            for(auto r:rgt) {
                TreeNode *root = new TreeNode(i);

                root->left = l;
                root->right = r;

                vec.push_back(root);
            }
        }
    }
    return vec;
}

vector<TreeNode*> Solution::generateTrees(int A) {
    return A == 0 ? vector<TreeNode*>() : generate(1, A);
}
