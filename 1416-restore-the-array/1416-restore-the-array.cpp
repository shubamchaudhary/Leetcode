class Solution {
public:
        int mod=1e9+7;
    int numberOfArrays(string s, int k) {
            vector<int> dp(s.size(),-1);
        return f(dp,s,k,0);
    }
long long f(vector<int> &dp,string &s,int k,int ind){
        if(ind>=s.size()){
                return 1;
        }
        if(s[ind]=='0'){
                return 0;
        }
        if(dp[ind]!=-1){
                return dp[ind];
        }
        long long ans=0;
        long long curr=0;
        for(int i=ind;i<s.size();i++){
                curr=curr*10+s[i]-'0';
                if(curr>k)break;
                ans=((ans)%mod+f(dp,s,k,i+1)%mod)%mod;
        }
        return dp[ind]=ans;
       
}
};