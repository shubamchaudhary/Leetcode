class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> v(n+1);
            vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
            for(int i=0;i<=n;i++){
                    v[i]=f(dp,i,n);
            }
            return v;
    }
int f(vector<vector<int>> &dp,int pos,int ind){
        if(dp[ind][pos]!=-1){
        return dp[ind][pos];
        }
        if(pos==0 ||ind==0 || ind==1 || pos==ind){
                return 1;
        }
        return dp[ind][pos]=f(dp,pos-1,ind-1)+f(dp,pos,ind-1);
}
};