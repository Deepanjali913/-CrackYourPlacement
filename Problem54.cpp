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
class BSTIterator {
public:
vector<TreeNode*> Nodes ;
int start = 0 ;
void inorder(TreeNode* root , vector<TreeNode*> &Nodes){
    if(!root) return ;
    inorder(root->left , Nodes );
    Nodes.push_back(root);
    inorder(root->right , Nodes);
}
    BSTIterator(TreeNode* root) {
        inorder(root , Nodes);
        
    }
    
    int next() {
        int x = Nodes[start]->val ;
        start++;
        return x ;
        
    }
    
    bool hasNext() {
        if(start < Nodes.size()) return true ;
        return false ;
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */