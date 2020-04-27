Node *lca(Node *root, int v1,int v2) {
    while(true) {
        if(root->data > v1 && root->data > v2) root = root->left;
        else if(root->data < v1 && root->data < v2) root = root->right;
        else return root;
    }
}
