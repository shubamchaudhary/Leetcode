class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       vector<int> ans(nums.size());
           int less=0;
            
            for(int i=0;i<nums.size();i++){
                    if(nums[i]<pivot){
                            ans[less]=nums[i];
                            less++;
                    }
            }
           // int inc=less;
             for(int i=0;i<nums.size();i++){
                    if(nums[i]==pivot){
                            ans[less]=nums[i];
                            less++;
                    }
            }
            
             for(int i=0;i<nums.size();i++){
                    if(nums[i]>pivot){
                            ans[less]=nums[i];
                            less++;
                    }
            }
            return ans;
    }
};