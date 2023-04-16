class Solution {
public:
        int mod=1e9+7;
    int numWays(vector<string>& words, string target) {
            vector<vector<int>> dp(target.size()+1,vector<int>(words[0].size()+1,-1));
           vector<unordered_map<char,int>> m(words[0].size());
            for(int i=0;i<words[0].size();i++){
                    for(int j=0;j<words.size();j++){
                            m[i][words[j][i]]++;
                           // cout<<words[i][j]<<endl;
                    }
            }
           
        return f(dp,m,words,target,0,0)%mod;
    }
long long f(vector<vector<int>> &dp,vector<unordered_map<char,int>> &m,vector<string>& words, string &target,int tind,int wind){
        if(tind>=target.size()){
                return 1;
        }
        if(wind>=words[0].size()){
                return 0;
        }
        if(dp[tind][wind]!=-1){
                return dp[tind][wind];
        }
        int ans=0;
       int freq=m[wind][target[tind]];
        int t=((f(dp,m,words,target,tind+1,wind+1)%mod)*freq%mod)%mod;
        int nt=f(dp,m,words,target,tind,wind+1)%mod;
        ans=(t+nt)%mod;
        return dp[tind][wind]=ans%mod;
}
};