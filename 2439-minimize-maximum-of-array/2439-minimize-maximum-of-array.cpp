class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
         int n=nums.size();
         for(int i=0;i<n;i++){
          mini=min(mini,nums[i]);
          maxi=max(maxi,nums[i]);
         }
          while(maxi>=mini){
                  long long mid=(maxi+mini)/2;
                  if(chk(mid,nums)){
                          maxi=mid-1;
                  }
                  else{
                        mini=mid+1;  
                  }
          }
            return mini;
    }
        
bool chk(int mid,vector<int> &nums){
        long long carry=0;
        for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]+carry>mid){
                        carry=nums[i]+carry-mid;
                }
                else{
                        carry=0;
                }
        }
        return carry==0;
}
};