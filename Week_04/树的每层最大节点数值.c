
int max(int x, int y){
    return x<y?y:x;
}
void dfs(struct TreeNode* root, int* returnSize, int * res, int depth){
    if(root==NULL) return;
    if((*returnSize)<depth+1){      //第一次出现，直接赋值
        res[depth] = root->val;
        *returnSize = depth+1;         //更新返回长度
    }else{
        res[depth] = max(res[depth],root->val);   //该层已经出现过，赋大值
    }
    dfs(root->left, returnSize, res, depth+1);
    dfs(root->right, returnSize, res, depth+1);
}
int* largestValues(struct TreeNode* root, int* returnSize){
    int * res = (int *)malloc(1000*sizeof(int));
    *returnSize = 0;
    if(!root) return 0;
    dfs(root, returnSize, res, 0);
    return res;
}
//用depth 来记录层数，如果是同一层，则比较大小，最后保留较大的值

