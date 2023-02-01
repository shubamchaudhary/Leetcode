class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
         int r=grid.size();
        int c=grid[0].size();
            for(int i=0;i<r;i++){
                    dfs(grid,i,0);
                      dfs(grid,i,c-1);
            }
             for(int i=0;i<c;i++){
                    dfs(grid,0,i);
                      dfs(grid,r-1,i);
            }
            int ans=0;
            for(int i=0;i<r;i++){
                    for(int j=0;j<c;j++){
                            ans+=grid[i][j];
                    }
            }
            return ans;
    }
void dfs(vector<vector<int>> &grid,int indr,int indc){
        int r=grid.size();
        int c=grid[0].size();
        if(indr>=r || indr<0 || indc>=c || indc<0 || grid[indr][indc]==0){
                return;
        }
        grid[indr][indc]=0;
        vector<int> v1={1,-1,0,0};
        vector<int> v2={0,0,1,-1};
        for(int i=0;i<4;i++){
                dfs(grid,indr+v1[i],indc+v2[i]);
        }
}
};