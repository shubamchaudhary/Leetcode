class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int ans=0;
        vector<vector<bool>> vis(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && vis[i][j]==false){
                   
                    int count=1+f(grid,i,j,vis);
                    if(count>0){
                        ans+=count;
                    }
                }
            }
        }
        return ans;
    }
int f(vector<vector<int>>& grid,int r,int c,vector<vector<bool>> &vis){
    if(r<0 || c<0 || r>grid.size()-1 || c>grid[0].size()-1 || grid[r][c]==0){
     
        return -1;
    }
    if(r==0 || c==0 || r==grid.size()-1 || c==grid[0].size()-1){
        return -9999999;
    }
    if(vis[r][c]==true || grid[r][c]==0){
       return -1;
    }
    
    vis[r][c]=true;
    vector<int> row={0,0,1,-1};
    vector<int> col={1,-1,0,0};
    int ans=0;
    for(int i=0;i<4;i++){
     int t= 1+f(grid,r+row[i],c+col[i],vis);
    ans+=t;
    }
    return ans;
}
};