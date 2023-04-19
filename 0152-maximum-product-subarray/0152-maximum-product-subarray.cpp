class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int maxi=INT_MIN;
     int prod=1;
            int maxel=maxi;
           // if(nums.size()==)
     for(int i=0;i<nums.size();i++){
             if(nums[i]==0){
                     prod=1;
             }
             else{
                     prod=prod*nums[i];
                     maxi=max(maxi,prod);
             }
             maxel=max(maxel,nums[i]);
     } 
            prod=1;
       for(int i=nums.size()-1;i>=0;i--){
             if(nums[i]==0){
                     prod=1;
             }
             else{
                     prod=prod*nums[i];
                     maxi=max(maxi,prod);
             }
     }
            return max(maxi,maxel);
    }
};