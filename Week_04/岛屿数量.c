
int numIslands(char** grid, int gridSize, int* gridColSize){
int count = 0;
int m = *gridColSize;
int n = gridSize;
if (gridSize == 0) return 0;
for (int i = 0;i<gridSize;i++){
    for (int j =0;j<*gridColSize;j++){
        if (grid[i][j] == '1'){         
       dfs(grid,i,j,m,n);    
         ++count;
        }

    }
}
return count;
}

 void dfs (char **grid,int i,int j,int m,int n){
    if ( i<0 || j<0 || i>= n||j>=m || grid[i][j] != '1')
        return ;
    
    grid[i][j] = '0';
    dfs(grid,i+1,j,m,n);    
     dfs(grid,i-1,j,m,n);    
      dfs(grid,i,j+1,m,n);    
       dfs(grid,i,j-1,m,n);    
    
}
//what we call 感染函数标记法，结合深度遍历递归
