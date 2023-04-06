class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int> m;
            m['a']++;
            m['i']++;
            m['o']++;
            m['u']++;
            m['e']++;
            int count=0;
            for(int i=0;i<k;i++){
                    if(m.find(s[i])!=m.end()){
                            count++;
                    }
            }
            int maxi=count;
            for(int i=k;i<s.size();i++){
                 if(m.find(s[i])!=m.end()){
                         count++;
                 } 
                  if(m.find(s[i-k])!=m.end()){
                         count--;
                 } 
                 maxi=max(maxi,count);   
            }
            return maxi;
    }
};