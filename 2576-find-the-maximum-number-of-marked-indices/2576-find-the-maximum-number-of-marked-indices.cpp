class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         int i=0;
            int k=nums.size()/2;
          // cout<<nums.size()/2; 
            if(nums.size()%2==1){
                    k++;
            }
         for(int j=k;j<nums.size();j++){
                 if(2*nums[i]<=nums[j]){
                         nums[j]=-1;
                         i++;
                 }
                
         }
            return 2*i;
    }
};