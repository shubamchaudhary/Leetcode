class Solution {
public:
    bool wordPattern(string p, string s) {
        unordered_map<char,string> m;
            int ind=0;
        for(int i=0;i<p.size();i++){
                if(ind>=s.size()){
                        return false;
                }
                    string t;
                while(ind<s.size() && s[ind]!=' '){
                        t.push_back(s[ind]);
                        ind++;
                }
                if(s[ind]==' '){
                        ind++;
                }
                if(m.find(p[i])!=m.end()){
                        if(m[p[i]]!=t){
                                return false;
                        }
                }
                else{
                        m[p[i]]=t;
                }
                for(auto it:m){
                            if(it.second==t && it.first!=p[i]){
                                 return false;}
                    }
        }
            if(ind!=s.size()){
                    return false;
            }
            return true;
    }
};