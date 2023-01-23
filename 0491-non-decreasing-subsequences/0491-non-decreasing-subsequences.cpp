class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        map<vector<int> , int> ans;
            vector<int> t;
            f(ans,t,nums,0,INT_MIN);
            vector<vector<int>> ret;
            for(auto it:ans){
                    ret.push_back(it.first);
            }
            return ret;
    }
void f( map<vector<int> , int> &ans,vector<int> t,vector<int>& nums,int ind,int prev){
        if(ind==nums.size()){
              if(t.size()>1 && ans.find(t)==ans.end()){
                   ans[t]++;
                    
                    
              }
                  return;
        }
        if(nums[ind]>=prev){
                t.push_back(nums[ind]);
                f(ans,t,nums,ind+1,nums[ind]);
                t.pop_back();
               
        }
         f(ans,t,nums,ind+1,prev);
}
};