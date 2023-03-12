class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
            if(str.size()==0){
                    return "";
            }
        string pr=str[0];
           
            for(int i=1;i<str.size();i++){
                    pr=pref(pr,str[i]);
            }
            return pr;
    }
string pref(string s1,string s2){
        int n=min(s1.size(),s2.size());
        while(s1.substr(0,n)!=s2.substr(0,n)){
                n--;
        }
        return s1.substr(0,n);
}
};