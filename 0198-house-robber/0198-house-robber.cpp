class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
            return f(dp,nums,0);
    }
int f(vector<int> &dp,vector<int>& nums,int ind){
        if(ind>=nums.size()){
                return 0;
        }
        if(dp[ind]!=-1){
                return dp[ind];
        }
        int t=nums[ind]+f(dp,nums,ind+2);
        int nt=f(dp,nums,ind+1);
        return dp[ind]=max(t,nt);
}
};