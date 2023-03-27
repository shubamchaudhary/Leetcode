class Solution {
public:
        int mod=1e9+7;
    int waysToReachTarget(int t, vector<vector<int>>& arr) {
            vector<vector<int>> dp(arr.size(),vector<int>(t+1,-1));
        return f(dp,t,arr,0)%mod;
    }
int f(vector<vector<int>> &dp,int t, vector<vector<int>>& arr,int ind){
        if(t==0){
                return 1;
        }
        if(ind>=arr.size() || t<0){
                return 0;
        }
        if(dp[ind][t]!=-1){
                return dp[ind][t];
        }
        long long take=0;
        for(int i=0;i<=arr[ind][0];i++){
               take= (take%mod+ f(dp,t-arr[ind][1]*i,arr,ind+1)%mod)%mod;
        }
      return dp[ind][t]=take%mod;
}
};