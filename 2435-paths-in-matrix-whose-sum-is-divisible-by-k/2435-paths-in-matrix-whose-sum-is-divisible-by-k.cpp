class Solution {
public:
        int mod=1e9+7;
    int numberOfPaths(vector<vector<int>>& grid, int k) {
            vector<vector<vector<int>>> dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(k+1,-1)));
        return f(dp,grid,k,0,0,0)%mod;
    }
int f(vector<vector<vector<int>>> &dp,vector<vector<int>>& grid, int k,int r,int c,int sum){
        int m=grid.size();
         int n=grid[0].size();
        if(r>=m || c>=n){
                return 0;
        }
        if(dp[r][c][sum]!=-1){
                return dp[r][c][sum]%mod;
        }
        if(r==m-1 && c==n-1){
                if((sum+grid[r][c])%k==0){
                        return 1;
                }
                return 0;
        }
        int down=f(dp,grid,k,r+1,c,(sum+grid[r][c])%k)%mod;
        int right=f(dp,grid,k,r,c+1,(sum+grid[r][c])%k)%mod;
        return dp[r][c][sum]=(down%mod+right%mod)%mod;
        
}
};