class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
            string str;
            f(ans,s,str,0,3,0,0,-1);
            return ans;
    }
void f(vector<string> &ans,string &s,string str,int ind,int dot,int num,int len,int fir){
        if(dot<0){
                return;
        }
        if(dot==0 && ind==s.size() && fir==0 && len!=1){
                 return;}
        if(ind>=s.size()){
                if(dot==0 && (fir!=0 || num==0)){
                    ans.push_back(str); 
                        return;
                }
                else{
                        return;
                }
        }
        if(num*10+s[ind]-'0'<=255){
                str.push_back(s[ind]);
             if(len==0){
                      f(ans,s,str,ind+1,dot,num*10+s[ind]-'0',len+1,s[ind]-'0');
             }  
                else{
                      f(ans,s,str,ind+1,dot,num*10+s[ind]-'0',len+1,fir);
                }
                str.pop_back();
                if(((fir==0 && len==1) || (fir!=0)  )&& len!=0){ 
               str.push_back('.');
                f(ans,s,str,ind,dot-1,0,0,-1);
                 str.pop_back();
                                              }
        }
        else  if(((fir==0 && len==1) || (fir!=0)  )&& len!=0){
             str.push_back('.');
                f(ans,s,str,ind,dot-1,0,0,-1);
                 str.pop_back();   
        }
         
}
};