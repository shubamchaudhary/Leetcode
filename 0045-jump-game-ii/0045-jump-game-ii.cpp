class Solution {
public:
    int jump(vector<int>& nums) {
            int n=nums.size();
        vector<long long> dp(n,-1);
            return f(dp,nums,0);
    }
long long f(vector<long long> &dp,vector<int> &nums,int ind){
        if(ind>=nums.size()-1){
                return 0;
        }
        if(dp[ind]!=-1){
                return dp[ind];
        }
        long long mini=INT_MAX;
        for(int i=0;i<nums[ind];i++){
                mini=min(mini,1+f(dp,nums,ind+i+1));
        }
        return dp[ind]=mini;
}
};