class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
            if(s.size()==0){
                    return true;
            }
           for(int i=0;i<s.size();i++){
                   if(st.size()!=0){
                           if((st.top()=='(' && s[i]==')') || (st.top()=='[' && s[i]==']') || (st.top()=='{' && s[i]=='}')){
                                   st.pop();
                           }
                           else{
                                   st.push(s[i]);
                           }
                   }
                   else{
                           st.push(s[i]); 
                   }
           }
            return st.size()==0;
    }
};