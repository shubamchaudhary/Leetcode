class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
       string ans=s;
       int nz=0;
            int no=0;
            for(int i=0;i<s.size();i++){
                    if(s[i]=='0') nz++;
                    else no++;
            }
            for(int i=0;i<no;i++){
                    ans[i]='1';
            }
             for(int i=no;i<s.size();i++){
                    ans[i]='0';
            }
            int counter=0;
            while(s!=ans){
                    counter++;
                    for(int i=0;i<s.size()-1;i++){
                            if(s[i]=='0' && s[i+1]=='1'){
                                    swap(s[i],s[i+1]);
                                    i++;
                            }
                    }
            }
            return counter;
    }
};