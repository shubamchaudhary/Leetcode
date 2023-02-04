class Solution {
public:
    bool checkInclusion(string s1, string s2) {
            if(s1.size()>s2.size()){
                    return false;
            }
        unordered_map<char,int> m1;
            int n=s1.size();
            for(int i=0;i<n;i++){
                    m1[s1[i]]++;
            }
           unordered_map<char,int> m2;
           int f=0;
         
            for(int i=0;i<n;i++){
                    m2[s2[i]]++;
                 
            }
            if(m1==m2){
                    return true;
            }
            for(int i=n;i<s2.size();i++){
                    if(m2[s2[f]]==1){
                            m2.erase(s2[f]); 
                    }
                    else{
                            m2[s2[f]]--;
                    }
                    f++;
                    m2[s2[i]]++;
                     if(m1==m2){
                    return true;
            }
            }
            return false;
    }
};