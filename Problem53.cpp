class Solution
{
    public:
    Node* inorderPre(Node* root ,int key){
        Node* pre= NULL;
        while(root){
            if(root->key < key){
                pre = root ;
                root=root->right;
            }
            else{
                root=root->left;
            }
            
        }
        return pre ;
        
    }
    Node* inorderSuc(Node* root ,int key){
        Node* suc = NULL ;
        while(root){
            if(root->key > key){
                suc = root ;
                root= root->left;
            }
            else{
                root=root->right;
            }
            
        }
        return suc ;
    }
    
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        pre = inorderPre(root , key);
        suc = inorderSuc(root , key);
        
        
    }
};