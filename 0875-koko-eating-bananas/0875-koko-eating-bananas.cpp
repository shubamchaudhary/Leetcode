class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mini=0;
        int maxi=INT_MIN;
            for(int i=0;i<piles.size();i++){
                   
                    maxi=max(maxi,piles[i]);
            }
              
              while(maxi>mini+1){
                 int t=(mini+maxi)/2;
                  if(ispossible(piles,t,h)){
                    maxi=t;
                   } 
                      else{
                           mini=t;
                      }
                 
            }
            return maxi;
    }
bool ispossible(vector<int> &piles,int time,int hours){
        for(int i=0;i<piles.size();i++){
                if(piles[i]%time==0){
                  hours-=piles[i]/time;
                }
                else{
                        hours-=(piles[i]/time+1);
                }
                if(hours<0){
                        return false;
                }
        }
       return true;
}
};