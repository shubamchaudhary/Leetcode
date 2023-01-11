class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=nums.size();
            int m=l.size();
            vector<bool> ans(l.size(),true);
            for(int i=0;i<m;i++){
                    vector<int> t;
                    for(int j=l[i];j<=r[i];j++){
                            t.push_back(nums[j]);
                    }
                    sort(t.begin(),t.end());
                    for(int j=0;j<t.size()-2;j++){
                            if(t[j+2]-t[j+1]!=t[j+1]-t[j]){
                                    ans[i]=false;
                                    break;
                            }
                    }
            }
            return ans;
    }
};