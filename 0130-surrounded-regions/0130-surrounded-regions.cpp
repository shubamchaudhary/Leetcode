class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int r=board.size();
            int c=board[0].size();
            vector<vector<int>> vis(r,vector<int>(c,0));
            for(int i=0;i<r;i++){
                  
                    dfs(board,vis,i,0);
                   
                    dfs(board,vis,i,c-1);
            }
              for(int i=0;i<c;i++){
                  
                    dfs(board,vis,0,i);
                   
                    dfs(board,vis,r-1,i);
            }
            for(int i=0;i<r;i++){
                    for(int j=0;j<c;j++){
                            if(board[i][j]=='O'){
                                board[i][j]='X';    
                            }
                            if(board[i][j]=='.'){
                                board[i][j]='O';    
                            }
                    }
            }
           
    }
        void dfs(vector<vector<char>>& board,vector<vector<int>>& vis,int indr,int indc){
               int n=board.size();
                int c=board[0].size();
                if(indr>=n || indc>=c || indr<0 || indc<0 || board[indr][indc]=='X'|| vis[indr][indc]==1 ){
                        return;
                }
               
                board[indr][indc]='.';
                vis[indr][indc]=1;
                vector<int> v1={1,-1,0,0};
                vector<int> v2={0,0,1,-1};
                for(int i=0;i<4;i++){
                       dfs(board,vis,indr+v1[i],indc+v2[i]); 
                }
        }
};