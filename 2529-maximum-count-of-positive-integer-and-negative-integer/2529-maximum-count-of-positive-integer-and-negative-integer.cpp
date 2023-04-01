class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        if(nums[l]>0 || nums[r]<0){
                return nums.size();
        }
            if(nums[l]==0 && nums[r]==0){
                    return 0;
            }
        while(l<r-1){
                int mid=(l+r)/2;
                if(nums[mid]<0){
                        l=mid;
                }
                else{
                        r=mid;
                }
        }
            while(l>=0 && nums[l]>=0){
                    l--;
            }
            while(r<nums.size() && nums[r]<=0){
                    r++;
            }
            
            if(l+1>nums.size()-r){
                    return l+1;
            }
            return nums.size()-r;
           
    }
};