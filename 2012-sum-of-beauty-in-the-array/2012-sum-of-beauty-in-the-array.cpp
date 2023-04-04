class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        vector<int> maxi(n);
        vector<int> mini(n);
        mini[n-1]=nums[n-1];
        maxi[0]=nums[0];
        for(int i=1;i<n;i++){
               maxi[i]=max(maxi[i-1],nums[i]);
        }
          for(int i=n-2;i>=0;i--){
               mini[i]=min(mini[i+1],nums[i]);
        }   
          int ans=0;
          for(int i=1;i<n-1;i++){
                  if(maxi[i-1]<nums[i] && nums[i]<mini[i+1]){
                          ans+=2;
                  }
                  else if(nums[i]>nums[i-1] && nums[i]<nums[i+1]){
                          ans++;
                  }
          }
            return ans;
    }
};