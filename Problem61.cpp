    // Function that constructs BST from its preorder traversal.
    Node* build(int pre[] , int &i , int bound){
        if(i ==  sizeof(pre) || pre[i]>bound ) return NULL;
        Node* root = newNode(pre[i++]);
        root->left = build(pre , i , root->data );
        root->right = build(pre , i , bound);
        return root;
    }
    Node* Bst(int pre[], int size) {
        int i =0;
       return build( pre , i , INT_MAX);
        
    }
};