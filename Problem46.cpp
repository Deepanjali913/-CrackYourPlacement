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
class Solution {
public:
void traverse(TreeNode* root , vector<int> &inorder){
    if(!root) return ;
    traverse(root->left , inorder);
    inorder.push_back(root->val);
    traverse(root->right , inorder);
}

    int getMinimumDifference(TreeNode* root) {
     vector<int> inorder ;
     traverse(root , inorder);
     int diff = INT_MAX ;
     for(int i=1 ; i<inorder.size() ; i++){
        diff = min(inorder[i]-inorder[i-1] , diff);
     }
     return diff ;
        
    }
};