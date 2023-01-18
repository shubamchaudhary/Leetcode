class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
          
            int n=nums.size();
           if(n==1){
                   return nums[0];
           }
                    int msf=nums[0];
                    int meh=0;
            for(int i=0;i<nums.size();i++){
                    meh+=nums[i];
                    if(msf<meh){
                            msf=meh;
                    }
                    if(meh<0){
                            meh=0;
                    }
            }
                 cout<<msf<<" ";
            int msf2=-nums[0];
            int meh2=0;
             int sum=0;
             for(int i=0;i<nums.size();i++){
                     sum-=nums[i];
                    meh2-=nums[i];
                    if(msf2<meh2){
                            msf2=meh2;
                    }
                    if(meh2<0){
                            meh2=0;
                    }
            }
            cout<<msf2<<" ";
           if(sum==msf2){
                   msf2=-min(msf2+nums[0],msf2+nums[n-1]);
           }
            else{
                    msf2=-sum+msf2;
            }
            cout<<msf2<<" ";
            msf=max(msf,msf2);
      
           
            
            return msf;
    }
};