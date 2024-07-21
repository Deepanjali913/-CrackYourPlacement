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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans ;
        if(!root) return ans ;
        q.push(root);
        bool leftToRight = true ;
        while(!q.empty()){
            int size = q.size();
            vector<int> res(size) ;
            for(int i=0 ; i<size ; i++){
                TreeNode* node = q.front();
                int index = leftToRight ? i : size-i-1;
                res[index] = node->val; 
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                q.pop();
            }
            leftToRight = !leftToRight ;
            ans.push_back(res);
        }
        return ans ;
    }
};