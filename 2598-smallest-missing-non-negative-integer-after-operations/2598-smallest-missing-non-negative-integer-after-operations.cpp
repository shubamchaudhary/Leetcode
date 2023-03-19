class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> m;
            int n=nums.size();
            int val=0;
          //  cout<<-10%5;
            int maxi=INT_MIN;
            for(int i=0;i<k;i++){
                    m[i]=0;
            }
            for(int i=0;i<n;i++){
                    m[(nums[i]%k+k)%k]++;
                    maxi=max(maxi,(nums[i]%k+k)%k);
                   // cout<<(nums[i]%k+k)%k<<endl;
            }
           // cout<<maxi<<endl;
            for(int i=0;i<k;i++){
                    if(m[i]==0){
                           // cout<<"k";
                            return i;
                    }
            }
            int mini=INT_MAX;
            int c=INT_MAX;
            for(auto it:m){
                    if(mini>it.second){
                            mini=it.second;
                            val=it.first;
                    }
                    else if(mini==it.second && val>it.first){
                            val=it.first;
                    }
            }
            return m[val]*k+val;
    }
};