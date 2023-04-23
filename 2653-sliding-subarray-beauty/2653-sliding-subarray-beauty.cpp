class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> ans(nums.size()-k+1,0);
            map<int,int> m;
            int ind=0;
            for(int i=0;i<k;i++){
                    if(nums[i]<0){
                            m[nums[i]]++;
                    }
            }
            
            
            
           int c=0;
           int st=1;
            for(auto it:m){
                    if(c+it.second>=x){
                            ans[ind]=(it.first); 
                            break;
                    }
                    c+=it.second;
            }
           /* for(auto it:m){
                            cout<<it.first<<" "<<it.second<<endl;
                    }
            cout<<endl;
            cout<<endl;*/
            ind++;
            for(int i=k;i<nums.size();i++){
                    if(nums[i-k]<0){
                          if(m[nums[i-k]]==1)  m.erase(nums[i-k]);
                          else m[nums[i-k]]--;
                    }
                    if(nums[i]<0){
                            m[nums[i]]++;
                    }
                    /*for(auto it:m){
                            cout<<it.first<<" "<<it.second<<endl;
                    }
                    cout<<endl;*/
                    c=0;
                    for(auto it:m){
                    if(c+it.second>=x){
                            ans[ind]=(it.first);
                            break;
                    }
                            c+=it.second;
            }
                    ind++;
            }
            return ans;
    }
};