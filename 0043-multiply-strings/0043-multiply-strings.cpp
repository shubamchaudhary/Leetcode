class Solution {
public:
    string multiply(string nums1, string nums2) {
            if(nums1=="0" || nums2=="0"){
                    return "0";
            }
        vector<int> v(nums1.size()+nums2.size(),0);
            for(int i=nums1.size()-1;i>=0;i--){
                    for(int j=nums2.size()-1;j>=0;j--){
                            v[i+j+1]+=(nums1[i]-'0')*(nums2[j]-'0');
                            v[i+j]+=v[i+j+1]/10;
                            v[i+j+1]=v[i+j+1]%10;
                    }
                    
                    }
            int i=0;
                    while(v[i]==0){
                            i++;}
                    string ans;
                    for(int k=i;k<v.size();k++){
                         ans.push_back(v[k]+'0');   
                    }
                   
            return ans;
    }
};