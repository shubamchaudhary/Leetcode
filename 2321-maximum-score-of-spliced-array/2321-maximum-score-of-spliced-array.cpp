class Solution {
public:
    int maximumsSplicedArray(vector<int>& n1, vector<int>& n2) {
            vector<vector<int>> dp1(n1.size(),vector<int>(3,-1));
             vector<vector<int>> dp2(n1.size(),vector<int>(3,-1));
      return max(f(dp1,n1,n2,0,0),f(dp2,n2,n1,0,0));
            
    }
int f(vector<vector<int>> &dp,vector<int> &n1,vector<int> &n2,int ind,int flag){
        if(ind>=n1.size()){
                return 0;
        }
        if(dp[ind][flag]!=-1){
                return dp[ind][flag];
        }
        if(flag==2){
                return dp[ind][flag]=n1[ind]+f(dp,n1,n2,ind+1,2);
        }
        else if(flag==0){
                return dp[ind][flag]=max(n1[ind]+f(dp,n1,n2,ind+1,0),n2[ind]+f(dp,n1,n2,ind+1,1));
        }
        else if(flag==1){
                return dp[ind][flag]=max(n2[ind]+f(dp,n1,n2,ind+1,1),n1[ind]+f(dp,n1,n2,ind+1,2));
        }
        return 0;
}
};