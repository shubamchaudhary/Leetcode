class Solution {
public:
    string simplifyPath(string s) {
       stack<char> st;
        int i=0;
       while(i<s.size()){
               string ns;
             if(st.size()==0 || st.top()!='/')  st.push(s[i]);
               i++;
               while(i<s.size() && s[i]!='/'){
                       ns.push_back(s[i]);
                       i++;
               }
               
               if(ns=="" || ns=="."){
                       continue;
               }
               else if(ns==".."){
                       //cout<<i;
                       if(st.size()>1 && st.top()=='/'){
                               st.pop();
                       }
                       while(st.size()>1 && st.top()!='/'){
                               st.pop();
                       }
               }
               else{
                       for(int j=0;j<ns.size();j++){
                               st.push(ns[j]);
                       }
               }
       }
          
            if(st.size()>1 && st.top()=='/'){
                    //cout<<"hell";
                    st.pop();
            }
            /*if(st.size()==0){
               return "/";}*/
           string ans;
            
            while(st.size()>0){
                   // cout<<st.top()<<" ";
                    ans.push_back(st.top());
                    st.pop();
            }
            reverse(ans.begin(),ans.end());
           /* int i=s.size()-1;
            while(i>=0 && s[i]=='.'){
                    ans.push_back('.');
                    i--;
            }*/
            return ans;
            
    }
};