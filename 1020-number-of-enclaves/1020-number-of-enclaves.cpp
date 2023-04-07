class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
                dfs(grid,i,0);
                dfs(grid,i,grid[0].size()-1);
        }
         for(int i=0;i<grid[0].size();i++){
                dfs(grid,0,i);
                dfs(grid,grid.size()-1,i);
        }
           int ans=0;
            for(int i=1;i<grid.size()-1;i++){
                    for(int j=1;j<grid[0].size()-1;j++){
                            ans+=grid[i][j];
                    }
            }
            return ans;
    }
void dfs(vector<vector<int>>& g,int r,int c){
        if(r>=g.size() || c>=g[0].size() || r<0 || c<0 || g[r][c]==0){
                return;
        }
        g[r][c]=0;
        vector<int> v1={1,0,-1,0};
        vector<int> v2={0,1,0,-1};
        for(int i=0;i<4;i++){
                dfs(g,r+v1[i],c+v2[i]);
        }
}
};