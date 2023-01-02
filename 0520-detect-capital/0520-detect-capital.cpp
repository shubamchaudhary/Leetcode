class Solution {
public:
    bool detectCapitalUse(string s) {
            if(s.size()==1){
                    return true;
            }
            cout<<s[0]-'A';
        if(s[0]-'a'<0){
                if(s[1]-'a'<0){
                        for(int i=2;i<s.size();i++){
                                if(s[i]-'a'>=0){
                                        return false;
                                }
                        }
                }
                else{
                      for(int i=2;i<s.size();i++){
                                if(s[i]-'a'<0){
                                        return false;
                                }
                        }   
                }
        }
            else{
                    for(int i=1;i<s.size();i++){
                            if(s[i]-'a'<0){
                                    return false;
                            }
                    }
            }
            return true;
    }
};