class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(mi(nums) || md(nums)){
                return true;
        }
            return false;
    }
bool mi(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
                if(nums[i+1]<nums[i]){
                        return false;
                }
        }
        return true;
}
bool md(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
                if(nums[i+1]>nums[i]){
                        return false;
                }
        }
        return true;
}
};