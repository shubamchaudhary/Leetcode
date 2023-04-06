class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));
        int ans=0;
        for(int i=0;i<grid.size();i++){
           for(int j=0;j<grid[0].size();j++){
             if(grid[i][j]==0 && vis[i][j]==0){
                 int flag=1;
                 bfs(grid,i,j,flag,vis);
                 ans+=flag;
             }

           }
        }
        return ans;
    }
void bfs(vector<vector<int>>& mat,int r,int c,int &flag,vector<vector<int>> &vis){
    if(r<0 || c<0 || r>mat.size()-1 || c>mat[0].size()-1 || mat[r][c]==1){
       return ;
    }
    if(r==0 || c==0 || r==mat.size()-1 || c==mat[0].size()-1){
        flag=0;
    }
    if(vis[r][c]==1){
        return;
    }
    vis[r][c]=1;
    bfs(mat,r+1,c,flag,vis);
    bfs(mat,r-1,c,flag,vis);
    bfs(mat,r,c+1,flag,vis);
    bfs(mat,r,c-1,flag,vis);


}
};