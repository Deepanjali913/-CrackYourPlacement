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
    void findPaths(TreeNode* node , string path , vector<string> &paths){
        if(!node) return ;
        if(!path.empty()){
            path += "->";
        }
        path+=to_string(node->val);
        if(!node->left && !node->right){
            paths.push_back(path);
        }
        else{
            findPaths(node->left , path , paths);
            findPaths(node->right , path , paths);
        }

    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths ;
        if(root){

            findPaths(root , "" , paths);
        }
        return paths ;
        
    }
};