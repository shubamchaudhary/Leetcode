class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
            int s1=0;
            int s2=0;
            for(int i=0;i<n;i++){
                    s1+=gas[i];
            }
              for(int i=0;i<n;i++){
                    s2+=cost[i];
            }
            if(s2>s1){
                    return -1;
            }
            if(s1==s2 && cost==gas && n>1){
               return -1;
            }
            for(int i=0;i<n;i++){
               int count=n-1;
                int mon=0;
               int ind=i;
                  while(count){
                          mon+=gas[ind];
                          mon-=cost[ind];
                          if(mon<0){
                                  i=ind;
                           break;
                          }
                          if(ind==n-1){
                           ind=0;
                          }
                          else{
                                  ind++;
                          }
                          count--;
                          
                  }  
                    if(count<=0 && mon>=0){
                            return i;
                    }
            }
            return -1;
    }
};