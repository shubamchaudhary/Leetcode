class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
       
            if(nums.size()<3){
                    return 0;
            }
             int d=nums[1]-nums[0];
         int c=1;
            int ans=0;
        for(int i=1;i<nums.size()-1;i++){
                if(nums[i+1]-nums[i]==d){
                        c++;
                }
                else{
                        if(c>=2){
                                cout<<c<<endl;
                                ans+=c*(c+1)/2-c;
                                c=1;
                        }
                        else{
                                c=1;
                        }
                       d=nums[i+1]-nums[i] ;
                }
        }
             if(c>=2){
                     cout<<c<<endl;
                                ans+=c*(c+1)/2-c;
                                c=0;
                        }
            return ans;
    }
};