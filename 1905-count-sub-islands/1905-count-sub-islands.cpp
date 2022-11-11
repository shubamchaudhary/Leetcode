class Solution {
public:
    int countSubIslands(vector<vector<int>>& m1, vector<vector<int>>& m2) {
        vector<vector<bool>> vis(m1.size(),vector<bool>(m1[0].size(),false));
        int ans=0;
        for(int i=0;i<m1.size();i++){
            for(int j=0;j<m1[0].size();j++){
                if(m2[i][j]==1 && vis[i][j]==false){
                    int flag=1;
                    dfs(m1,m2,vis,i,j,flag);
                    ans+=flag;
                }
            }
        }
        return ans;
    }
void dfs(vector<vector<int>>& m1, vector<vector<int>>& m2,vector<vector<bool>> &vis,int r,int c,int &flag){
          if( r<0 || c<0 || r>m2.size()-1 || c>m2[0].size()-1 ||  vis[r][c]==true){
              return;
          }
          if(m2[r][c]==1 && m1[r][c]==0){
              flag=0;
             
          }
        
          if(m2[r][c]==0){
              return;
          }
         
          vis[r][c]=true;
          vector<int> v1={0,0,1,-1};
          vector<int> v2={1,-1,0,0};
          for(int i=0;i<4;i++){
              dfs(m1,m2,vis,r+v1[i],c+v2[i],flag);
          }
}
};