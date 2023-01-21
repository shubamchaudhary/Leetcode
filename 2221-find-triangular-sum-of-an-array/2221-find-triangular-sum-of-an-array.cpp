class Solution {
public:
    int triangularSum(vector<int>& nums) {
     int n=nums.size();
            for(int i=n-1;i>=1;i--){
                    vector<int> v(i);
                    for(int j=0;j<nums.size()-1;j++){
                          v[j]=(nums[j]+nums[j+1])%10;  
                    }
                    nums=v;
            }
            return nums[0];
    }
};