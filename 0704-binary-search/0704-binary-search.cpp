class Solution {
public:
    int search(vector<int>& nums, int t) {
        int f=0;
        int l=nums.size()-1;
        while(f<=l){
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