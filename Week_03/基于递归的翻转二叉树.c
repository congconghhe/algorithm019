  struct TreeNode {
      int val;
      struct TreeNode *left;
     struct TreeNode *right;
   };

struct TreeNode* invertTree (struct TreeNode * root){
 if (root == NULL)
    return NULL;
 struct TreeNode * temp = root->right;
 root ->right = root->left;
root->left = temp;
invertTree(root->left);
invertTree(root->left);
return root;
}  
