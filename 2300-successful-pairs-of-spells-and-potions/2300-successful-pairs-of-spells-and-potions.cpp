class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long t) {
        sort(p.begin(),p.end());
        vector<int> ans;
         for(int i=0;i<s.size();i++){
                 int l=0;
                 int r=p.size()-1;
                 while(l<=r){
                         int mid=(l+r)/2;
                         long long l1=s[i];
                         long long l2=p[mid];
                         if(l1*l2<t){
                                 l=mid+1;
                         }
                         else{
                             r=mid-1; 
                         }
                 }
                 ans.push_back(p.size()-l);
         }
            return ans;
    }
};