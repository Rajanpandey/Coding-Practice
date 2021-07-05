/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* findNext(Node* curr) {
        if (!curr) return NULL;
        
        if (curr->left) return curr->left;
        if (curr->right) return curr->right;
        
        return findNext(curr->next);
    }
    
    void helper(Node* root) {
        if (!root) return;

        if (root->left) {
            root->left->next = (root->right) ? root->right : findNext(root->next);
        }

        if (root->right) {
            root->right->next = findNext(root->next);
        }

        helper(root->right);
        helper(root->left);
    }

    Node* connect(Node* root) {
        helper(root);
        return root;
    }
};
