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
    void helper(Node* root) {
        if (!root) return;

        if (root->left) {
            root->left->next = root->right;
        }

        if (root->right && root->next) {
            root->right->next = root->next->left;
        }

        helper(root->left);
        helper(root->right);
    }

    Node* connect(Node* root) {
        helper(root);
        return root;
    }
};


/*
Interative solution without usign extra space:
class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return root;
        Node* node = root;

        while (node->left) {
            Node* curr = node;
            while (curr) {
                curr->left->next = curr->right;

                if (curr->next) {
                    curr->right->next = curr->next->left;
                }

                curr = curr->next;
            }

            node = node->left;
        }

        return root;
    }
};


Interative solution usign extra space:
class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return root;

        queue<Node*> myQueue;
        myQueue.push(root);

        while (!myQueue.empty()) {
            int qSize = myQueue.size();
            vector<Node*> level;
            
            for (int i = 0; i < qSize; i++) {
                Node* node = myQueue.front();
                myQueue.pop();

                level.push_back(node);

                if (node->left) myQueue.push(node->left);
                if (node->right) myQueue.push(node->right);
            }
            
            for (int i = 0; i < level.size() - 1; i++) {
                level[i]->next = level[i + 1];
            }
            level[level.size() - 1]->next = NULL;
        }

        return root;
    }
};
/*
