class Solution {
public:
    int search(vector<int>& nums, int t) {
        int f=0;
            if(nums[0]==t){
                    return 0;
            }
        int l=nums.size()-1;
        while(f<l){
                if(nums[f]==t){
                        return f;
                }
                if(nums[l]==t){
                        return l;
                }
                int mid=(f+l)/2;
                if(nums[mid]==t){
                        return mid;
                }
                else if(nums[mid]<t){
                        f=mid+1;
                }
                else{
                l=mid-1;
                }
        }
            return -1;
    }
};