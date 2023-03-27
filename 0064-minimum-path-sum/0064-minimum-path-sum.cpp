class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
            return f(grid,dp,grid.size()-1,grid[0].size()-1);
    }
        public:
        int f(vector<vector<int>> &grid,vector<vector<int>> &dp,int indy,int indx){
                if(indx==0 && indy==0){
                        return grid[0][0];
                }
                if(dp[indy][indx]!=-1){
                        return dp[indy][indx];
                }
                int r=INT_MAX;
                int d=INT_MAX;
                if(indx>0){
                     r=f(grid,dp,indy,indx-1)+grid[indy][indx];  
                }
                 if(indy>0){
                     d=f(grid,dp,indy-1,indx)+grid[indy][indx];  
                }
                return dp[indy][indx]= min(r,d);
        }
};