class Solution {
public:
    int strStr(string s, string t) {
       if(t.size()>s.size()){
               return -1;
       }
            for(int i=0;i<=s.size()-t.size();i++){
                   if(s.substr(i,t.size())==t){
                           return i;
                   } 
            }
            return -1;
    }
};