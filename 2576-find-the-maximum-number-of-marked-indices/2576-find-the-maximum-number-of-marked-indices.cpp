class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         int i=0;
          // cout<<nums.size()/2; 
         for(int j=nums.size()/2;j<nums.size();j++){
                 if(2*nums[i]<=nums[j] && nums[i]!=-1){
                         nums[j]=-1;
                         i++;
                 }
                
         }
            return 2*i;
    }
};