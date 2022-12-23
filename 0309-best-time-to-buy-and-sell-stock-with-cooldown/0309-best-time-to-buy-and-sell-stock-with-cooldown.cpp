class Solution {
public:
    int maxProfit(vector<int>& prices) {
            vector<vector<int>> dp(prices.size(),vector<int>(3,-1));
        return mp(dp,prices,0,1);
    }
       
int mp(vector<vector<int>> &dp,vector<int>& prices,int ind,int buy){
       
        if(ind>=prices.size()){
                return 0;
        }
        if(dp[ind][buy]!=-1){
                return dp[ind][buy];
        }
       int p=0;
        if(buy==1){
                p=max(-prices[ind]+mp(dp,prices,ind+1,2),mp(dp,prices,ind+1,1));
        }
       else{
                p=max(prices[ind]+mp(dp,prices,ind+2,1),mp(dp,prices,ind+1,2));
        }
        return dp[ind][buy]=p;
}
};