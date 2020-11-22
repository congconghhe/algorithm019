int isBSTUtil(struct TreeNode* node, long long min, long long max)  
{  
 
  if (node==NULL)  
     return 1; 
        
  if (node->val <= min || node->val >= max)  
     return 0;  

  return 
    isBSTUtil(node->left, min, node->val) && 
    isBSTUtil(node->right, node->val, max); 
}  

bool isValidBST(struct TreeNode* root){
    return isBSTUtil(root,LONG_MIN, LONG_MAX);

}
//这个解法不是直接比较各个根节点和紫薯的关系，而是每次递归都更新了每个节点应该存在的范围，然后点点递归，有一点酷。
