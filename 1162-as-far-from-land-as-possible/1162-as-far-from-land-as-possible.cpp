class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n=grid.size();
           // int c=n*n;
         for(int i=0;i<n;i++){
                 for(int j=0;j<n;j++){
                         if(grid[i][j]==1){
                                 q.push({i,j});     
                         }
                 }
         }
            if(q.size()==n*n){
                    return -1;
            }
            int count=0;
            while(q.size()>0){
                    int size=q.size();
                    cout<<size<<endl;
                    count++;
                    for(int i=0;i<size;i++){
                            
                       pair<int,int> node=q.front();
                            q.pop();
                            int r=node.first;
                            int c=node.second;
                            if(r<n-1 && grid[r+1][c]==0){
                                    q.push({r+1,c});
                                    grid[r+1][c]=1;
                                   
                                    cout<<"a";
                            }
                              if(r>0 && grid[r-1][c]==0){
                                    q.push({r-1,c});
                                    grid[r-1][c]=1;
                                  
                                      cout<<"b";
                            }
                              if(c<n-1 && grid[r][c+1]==0){
                                    q.push({r,c+1});
                                    grid[r][c+1]=1;
                                   
                                      cout<<"c";
                            }
                               if(c>0 && grid[r][c-1]==0){
                                    q.push({r,c-1});
                                    grid[r][c-1]=1;
                                    
                                       cout<<"d";
                            }
                 }
            }
            return count-1;
    }
};