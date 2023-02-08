class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=0;
            if(s.size()==0){
                    return 0;
            }
            int i=s.size()-1;
            while(s[i]==' '){
                    i--;
            }
            for(i;i>=0;i--){
                    if(s[i]==' '){
                            return l;
                    }
                   l++;
            }
            return l;
    }
};