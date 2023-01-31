class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
            int n=scores.size();
            //sort scores acc to ages
        for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                        if(scores[i]>scores[j] || (scores[i]==scores[j] && ages[i]>ages[j])){
                                swap(scores[i],scores[j]);
                                swap(ages[i],ages[j]);
                        }
                }
        }
            vector<vector<int>> dp(n,vector<int>(1001,-1));
            return maxscore(dp,scores,ages,0,0);
            
    }
int maxscore(vector<vector<int>> &dp,vector<int> &scores,vector<int> &ages,int ind,int prevage){
        if(ind>=ages.size()){
                return 0;
        }
        if(dp[ind][prevage]!=-1){
                return dp[ind][prevage];
        }
        int t=0;
        int nt=0;
        if(prevage>ages[ind]){
                nt=maxscore(dp,scores,ages,ind+1,prevage);
        }
        else{
                t=scores[ind]+maxscore(dp,scores,ages,ind+1,ages[ind]);
                nt=maxscore(dp,scores,ages,ind+1,prevage);
        }
        return dp[ind][prevage]= max(t,nt);
}
};