class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       
        int n=s.size();
            for(int i=1;i<=s.size()/2;i++){
                    if(n%i==0){
                            int flag=1;
                           
                            string t=s.substr(0,i);
                            for(int j=0;j<s.size();j+=i){
                                    if(s.substr(j,i)!=t){
                                            flag=0;
                                            break;
                                    }
                            }
                            if(flag==1){
                                    return true;
                            }
                    }
            }
            return false;
    }
};