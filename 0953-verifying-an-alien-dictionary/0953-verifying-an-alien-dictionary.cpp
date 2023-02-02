class Solution {
public:
    bool isAlienSorted(vector<string>& w, string o) {
        unordered_map<char,int> mp;
            for(int i=0;i<o.size();i++){
                    mp[o[i]]=i;
            }
            for(int i=0;i<w.size()-1;i++){
                    int n=w[i].size();
                    int m=w[i+1].size();
                    if(n>m){
                            if(w[i].substr(0,m)==w[i+1].substr(0,m)){
                                    return false;
                            }
                    }
                    n=min(n,m);
                    for(int j=0;j<n;j++){
                            if(mp[w[i][j]]<mp[w[i+1][j]]){
                                    break;
                            }
                            else if(mp[w[i][j]]>mp[w[i+1][j]]){
                                    return false;
                            }
                    }
            }
            return true;
    }
};