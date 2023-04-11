class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
           for(int i=s.size()-1;i>=0;i--){
                   if(s[i]=='*'){
                           st.push('*');
                   }
                   else{
                         if(st.size()>0 && st.top()=='*'){
                                 st.pop();
                         }
                           else{
                                   st.push(s[i]);
                           }
                   }
           }
            string ans;
            while(st.size()>0){
                    ans.push_back(st.top());
                    st.pop();
            }
            return ans;
    }
};