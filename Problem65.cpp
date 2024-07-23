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
    TreeNode* find(vector<int>& pre , int preStart ,int preEnd ,vector<int>& post , int postStart , int postEnd ){
        if(preStart > preEnd) return NULL ;
        TreeNode* root = new TreeNode(pre[preStart]);
        if(preStart == preEnd) return root;
        int postIndex = postStart ;
        while(post[postIndex] != pre[preStart + 1]) postIndex++;
        int len = postIndex - postStart + 1;
        root->left = find(pre , preStart + 1 , preStart+len , post , postStart , postIndex);
        root->right =find(pre , preStart +len+1 , preEnd , post , postIndex+1 , postEnd-1);
        return root;
    }

    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n = preorder.size();
        return find(preorder , 0 , n-1 , postorder , 0 , n-1);

        
    }
};