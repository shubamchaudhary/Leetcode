class Solution {
public:
    int minFlipsMonoIncr(string s) {
        vector<int> dp(s.size(),0);
            int num=0;
            if(s[0]=='1'){
                    num++;
            }
            for(int i=1;i<s.size();i++){
                    if(s[i]=='1'){
                            dp[i]=dp[i-1];
                            num++;
                    }
                    else{
                            dp[i]=min(num,dp[i-1]+1);
                    }
            }
            return dp[s.size()-1];
    }
};