class Solution {
        int mod=1e9+7;
public:
    int numTilings(int n) {
            vector<long long> dp(n+1,-1);
        return f(dp,n)%mod;
    }
long long f(vector<long long> &dp,int n){
        if(n<0){
                return 0;
        }
        if(n==0){
                return 1;
        }
        if(dp[n]!=-1){
                return dp[n];
        }
        long long o=f(dp,n-1)%mod;
        long long t=f(dp,n-2)%mod;
        long long t1=2*f(dp,n-3)%mod;
       
        long long s=0;
        for(int i=4;i<=n;i+=2){
             int t=f(dp,n-i);
                s=(s+2*t)%mod;
        }
         for(int i=5;i<=n;i+=2){
             int t=f(dp,n-i);
                s=(s+2*t)%mod;
        }
        return dp[n]=(o%mod+t%mod+t1%mod+s%mod)%mod;
}
};