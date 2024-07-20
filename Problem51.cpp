

/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST
void find(struct Node *root , vector<int> &ans){
    if(root==NULL) return;
    
    find(root->left,ans);
    ans.push_back(root->data);
    find(root->right,ans);
    
}
float findMedian(struct Node *root)
{
      vector<int> ans ;
      float res ;
      find(root,ans);
      int size = ans.size();
      if(size%2==0){
          res = ((float)ans[size/2]+(float)ans[(size/2) - 1])/2;
          
      }
      else res = ans[size/2];
      return res;
}