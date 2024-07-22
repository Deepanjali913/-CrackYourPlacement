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
 typedef long long ll;
 ll mod = 1e11 ;
class Solution {
public:
    
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode* , ll>> q ;
        if(!root) return 0 ;
        q.push({root , 1});
        ll max1 = LONG_MIN;
        while(!q.empty()){
            ll size  = q.size();
            ll mini , maxi ;
            for(int i=0 ; i<size ; i++){
                TreeNode* node = q.front().first ;
                ll x = q.front().second ;
                q.pop();
                if(i==0){
                    mini = x ;
                }
                if(i==size-1) maxi=x ;
                if(node->left) q.push({node->left , (2*x) % mod});
                if(node->right) q.push({node->right , (2*x +1) % mod});
            }
            max1 = max(max1 , maxi-mini +1);
        }
        return max1;
    }
};