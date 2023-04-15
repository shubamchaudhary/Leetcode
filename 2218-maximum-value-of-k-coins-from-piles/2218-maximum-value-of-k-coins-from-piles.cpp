class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        
            vector<vector<int>> dp(piles.size()+1,vector<int>(k+1,-1));
            return f(dp,piles,k,0);
    }
int f(vector<vector<int>>& dp,vector<vector<int>>& piles,int k,int ind){
        if(ind>=piles.size()){
                return 0;
        }
       if(dp[ind][k]!=-1){
                return dp[ind][k];
        }
        
        int sum=0;
        int maxi=0;
        maxi=max(maxi,f(dp,piles,k,ind+1));
        for(int i=0;i<piles[ind].size();i++){
                sum+=piles[ind][i];
                if(k-(i+1)>=0){
                 maxi=max(sum+f(dp,piles,k-(i+1),ind+1),maxi);}
        }
        return dp[ind][k]= maxi;
}
};