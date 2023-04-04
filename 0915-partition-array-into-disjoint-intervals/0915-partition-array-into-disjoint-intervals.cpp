class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
            vector<int> maxi(n);
            vector<int> mini(n);
            maxi[0]=nums[0];
            mini[n-1]=nums[n-1];
            for(int i=1;i<n;i++){
                    maxi[i]=max(nums[i],maxi[i-1]);
            }
             for(int i=n-2;i>=0;i--){
                    mini[i]=min(nums[i],mini[i+1]);
            }
            for(int i=0;i<n-1;i++){
                    if(maxi[i]<=mini[i+1]){
                            return i+1;
                    }
            }
            return n;
    }
};