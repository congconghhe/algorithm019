  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
int maxDepth(struct TreeNode *root){
if (root==NULL)
  return 0;
int left = maxDepth(root->left);
int right = maxDepth(root->right);
return fmax(right,left)+1;
}
