class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size()+2,-1);
            return f(dp,days,costs,0);
    }
int f(vector<int> &dp,vector<int>& days, vector<int>& costs,int ind ){
        if(ind>=days.size()){
                return 0;
        }
        if(dp[ind]!=-1){
               return dp[ind]; 
        }
        
       int one=costs[0]+f(dp,days,costs,ind+1);
         int k=ind;
        while(k<days.size() && days[k]-days[ind]<7){
                k++;
        }
       int seven=costs[1]+f(dp,days,costs,k);
       // k=ind;
      
         while(k<days.size() && days[k]-days[ind]<30){
                k++;
        }
       int thirty=costs[2]+f(dp,days,costs,k);
       // ind=k;
        return dp[ind]= min(one,min(seven,thirty));
}
};