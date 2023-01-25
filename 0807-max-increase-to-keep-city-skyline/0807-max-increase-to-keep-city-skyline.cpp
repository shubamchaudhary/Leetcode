class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
            vector<int> maxrow(n,0);
            vector<int> maxcol(n,0);
            for(int i=0;i<n;i++){
                    int maxi=0;
                    for(int j=0;j<n;j++){
                            maxi=max(maxi,grid[i][j]);
                    }
                    maxrow[i]=maxi;
            }
              for(int i=0;i<n;i++){
                    int maxi=0;
                    for(int j=0;j<n;j++){
                            maxi=max(maxi,grid[j][i]);
                    }
                    maxcol[i]=maxi;
            }
            int ans=0;
              for(int i=0;i<n;i++){
                   
                    for(int j=0;j<n;j++){
                           ans+=(min(maxrow[i],maxcol[j])-grid[i][j]);
                    }
                    
            }
            return ans;
    }
};