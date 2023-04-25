class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i=0;i<s.size();i++){
                m1[s[i]]=0;
                m2[s[i]]=0;
        }
         for(int i=0;i<t.size();i++){
                m1[t[i]]=0;
                m2[t[i]]=0;
        }
         for(int i=0;i<s.size();i++){
                m1[s[i]]++;
                
        }
         for(int i=0;i<t.size();i++){
                m2[t[i]]++;
                
        }
        int ans=0;
       for(auto it:m2){
               if(m1[it.first]>it.second){
                       ans+=m1[it.first]-it.second;
               }
       }
         for(auto it:m1){
               if(m2[it.first]>it.second){
                       ans+=m2[it.first]-it.second;
               }
       }
            return ans;
    }
};