/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    map<TreeNode* , TreeNode*>  findParent(TreeNode* root  ){
       
        map<TreeNode* , TreeNode*> parent;
         if(!root) return parent ;
        queue<TreeNode*> q ;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i=0 ; i<size ; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left){
                    parent[node->left] = node ;
                    q.push(node->left);
                }
                if(node->right){
                    parent[node->right] = node ;
                    q.push(node->right);
                }
            }
        }
        return  parent ;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       vector<int> ans ;
        map<TreeNode* , TreeNode*> parent = findParent(root);
        map<TreeNode*,bool> visited ;
        visited[target] = true ;
        queue<TreeNode*> q ;
        q.push(target);
        int dis = 0 ;
        while(!q.empty()){
            int size = q.size();
            if(dis++ == k ) break;
            for(int i=0 ; i<size ; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left && !visited[node->left]){
                    q.push(node->left);
                    visited[node->left]=true;
                }
                if(node->right && !visited[node->right]){
                    q.push(node->right);
                    visited[node->right]=true;
                }
                if(parent[node] && !visited[parent[node]]){
                    q.push(parent[node]);
                    visited[parent[node]]=true ;
                }
            }
            
        }
        while(!q.empty()){
                TreeNode* curr = q.front();
                q.pop();
                ans.push_back(curr->val);
        }
        return ans ;
    }
};