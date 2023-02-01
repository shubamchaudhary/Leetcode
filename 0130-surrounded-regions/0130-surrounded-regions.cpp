class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int r=board.size();
            int c=board[0].size();
           
            for(int i=0;i<r;i++){
                  
                    dfs(board,i,0);
                   
                    dfs(board,i,c-1);
            }
              for(int i=0;i<c;i++){
                  
                    dfs(board,0,i);
                   
                    dfs(board,r-1,i);
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
        void dfs(vector<vector<char>>& board,int indr,int indc){
               int n=board.size();
                int c=board[0].size();
                if(indr>=n || indc>=c || indr<0 || indc<0 || board[indr][indc]=='X'|| board[indr][indc]=='.' ){
                        return;
                }
               
                board[indr][indc]='.';
                
                vector<int> v1={1,-1,0,0};
                vector<int> v2={0,0,1,-1};
                for(int i=0;i<4;i++){
                       dfs(board,indr+v1[i],indc+v2[i]); 
                }
        }
};