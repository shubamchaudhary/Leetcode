class Solution {
public:
        int mod=1e9+7;
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
            vector<vector<vector<int>>> dp(profit.size(),vector<vector<int>>(n+1,vector<int>(102,-1)));
        return f(dp,n,minProfit,group,profit,0);
    }
int f(vector<vector<vector<int>>> &dp,int n, int minProfit, vector<int>& group, vector<int>& profit,int ind){
        if(ind>=profit.size()){
                if(minProfit<=0){
                        return 1;
                }
                return 0;
        }
        if(n<0){
                return 1;
        }
        if(minProfit<0){
                minProfit=0;
        }
        if(dp[ind][n][101-minProfit]!=-1){
               return dp[ind][n][101-minProfit];
        }
        int t=0;
        int nt=f(dp,n,minProfit,group,profit,ind+1)%mod;
        if(group[ind]<=n) t=f(dp,n-group[ind],minProfit-profit[ind],group,profit,ind+1)%mod;
        return dp[ind][n][101-minProfit]=(t+nt)%mod;
}
};
