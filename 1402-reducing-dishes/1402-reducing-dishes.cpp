class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
            vector<vector<int>> dp(s.size(),vector<int>(s.size()+1,-1));
        sort(s.begin(),s.end());
            return f(dp,s,0,1);
         
    }
int f(vector<vector<int>>& dp,vector<int>& s,int ind,int time){
        if(ind>=s.size()){
                return 0;
        }
        if(dp[ind][time]!=-1){
                return dp[ind][time];
        }
        int take=time*s[ind]+f(dp,s,ind+1,time+1);
        int nt=f(dp,s,ind+1,time);
        return dp[ind][time]=max(take,nt);
}
};