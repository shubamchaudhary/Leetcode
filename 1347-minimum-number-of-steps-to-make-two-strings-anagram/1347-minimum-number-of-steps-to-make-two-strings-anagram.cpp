class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
            for(int i=0;i<s.size();i++){
                    m1[s[i]]=0;
                    m2[t[i]]=0;
                    m2[s[i]]=0;
                    m1[t[i]]=0;
            }
            for(int i=0;i<s.size();i++){
                    m1[s[i]]++;
                    m2[t[i]]++;
            }
            int ans=0;
            for(auto it:m2){
                 if(m1[it.first]!=it.second){
                         ans+=abs(m1[it.first]-it.second);
                 }
            }
            return ans/2;
    }
};