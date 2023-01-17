class Solution {
public:
    string replaceWords(vector<string>& d, string s) {
        unordered_map<string,int> m;
            string ans;
            for(int i=0;i<d.size();i++){
                   m[d[i]]++; 
            }
            for(int i=0;i<s.size();i++){
                    string t;
                    while(i<s.size() && s[i]!=' '){
                            t.push_back(s[i]);
                            i++;
                    }
                    for(int j=0;j<t.size()-1;j++){
                            if(m.find(t.substr(0,j+1))!=m.end()){
                                    t=t.substr(0,j+1);
                                    break;
                            }
                    }
                    ans=ans+t;
                    ans.push_back(' ');
            }
            ans.pop_back();
            return ans;
    }
};