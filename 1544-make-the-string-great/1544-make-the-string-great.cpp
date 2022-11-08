class Solution {
public:
    string makeGood(string s) {
      
        if(s==" " || s.size()==1){
            return s;
        }
        stack<char> st;
        for(int i=0;i<s.size();i++){
            int t=0;
            if(st.size()!=0){
                char c=st.top();
                  t=abs(c-s[i]);
                cout<<t<<endl;
            }
          if(t==32){
                    st.pop();
                   
                }
                else{
                    st.push(s[i]);
                }
        }
        string ans(st.size(),'0');
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};