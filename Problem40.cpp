class Solution {
public:

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0){
            return NULL;
        }
        return BST(nums ,0,nums.size()-1);
    }
    TreeNode* BST(vector<int> nums,int left , int right){
        if(left>right){
            return NULL;
        }
        int mid=(left+right)>>1;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left=BST(nums,left,mid-1);
        node->right=BST(nums,mid+1,right);
        return node;

    }
};