class Solution {
public:
    int rob(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(),vector<int>(2,-1));
            return f(dp,nums,0,0);
    }
int f(vector<vector<int>> &dp,vector<int> &nums,int ind,int flag){
        if(ind>=nums.size()){
                return 0;
        }
        if(dp[ind][flag]!=-1){
                return dp[ind][flag];
        }
        int rob=0;
        if(ind!=nums.size()-1 || flag==0){
                if(ind==0){
                        rob=nums[ind]+f(dp,nums,ind+2,1);
                }
                else{
                        rob=nums[ind]+f(dp,nums,ind+2,flag);
                }
           
        }
        int notrob=f(dp,nums,ind+1,flag);
        return dp[ind][flag]=max(rob,notrob);
}
};