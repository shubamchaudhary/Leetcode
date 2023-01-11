class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);
            for(int i=0;i<nums1.size();i++){
                    int ind=0;
                    
                    while(nums1[i]!=nums2[ind]){
                            
                            ind++;
                            
                    }
                    
                    while(ind<nums2.size() && nums1[i]>=nums2[ind]){
                            ind++;
                    }
                    if(ind<nums2.size()){
                            ans[i]=nums2[ind];
                    }
            }
            return ans;
    }
};