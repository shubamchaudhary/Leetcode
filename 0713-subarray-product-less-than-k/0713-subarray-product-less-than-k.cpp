class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long prod=1;
            int ans=0;
            int n=nums.size();
            int l=0;
            int r=0;
            if(k<=1){
                    return 0;
            }
            
           for(int i=0;i<n;i++){
                 prod=prod*nums[i];
                   while(prod>=k){
                           prod/=nums[l];
                           l++;
                   }
                   ans+=(i-l)+1;
           }
            //ans+=(r+2-l);
            return ans;
    }
};