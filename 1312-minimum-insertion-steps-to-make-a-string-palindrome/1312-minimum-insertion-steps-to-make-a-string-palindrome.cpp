class Solution {
public:
    int minInsertions(string s) {
            vector<vector<int>> dp(s.size(),vector<int>(s.size(),-1));
        return f(dp,s,0,s.size()-1);
    }
int f(vector<vector<int>> &dp,string &s,int l,int r){
        if(l>=r){
                return 0;
        }
        if(dp[l][r]!=-1){
                return dp[l][r]=dp[l][r];
        }
        if(s[l]==s[r]){
                return f(dp,s,l+1,r-1);
        }
        else{
                return dp[l][r]=min(1+f(dp,s,l+1,r),1+f(dp,s,l,r-1));
        }
}
};