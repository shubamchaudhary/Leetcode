class Solution {
public:
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
        vector<int> v(w.size(),0);
            int c=0;
           for(int i=0;i<w.size();i++){
                   if(iv(w[i])){
                           c++;
                           }
                         v[i]=c;
                   
           }
            vector<int> ans(q.size());
            for(int i=0;i<q.size();i++){
                    if(q[i][0]==0){
                            ans[i]=v[q[i][1]];
                    }
                    else{
                          
                                     ans[i]=v[q[i][1]]-v[q[i][0]-1];
                            
                    }
                  
            }
            return ans;
    }
bool iv(string &s){
      int n=s.size()-1;
        if((s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u') && (s[n]=='a' || s[n]=='e' || s[n]=='i' || s[n]=='o' || s[n]=='u')){
                return true;
        }
        return false;
}
};