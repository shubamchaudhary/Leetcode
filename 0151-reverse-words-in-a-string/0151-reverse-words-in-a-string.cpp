class Solution {
public:
    string reverseWords(string s) {
        string ans;
            vector<string> st;
            int n=s.size();
            for(int i=0;i<n;){
                    string t;
                    while(i<n && s[i]!=' '){
                            t.push_back(s[i]);
                            i++;
                    }
                    if(t.size()>0)st.push_back(t);
                    if(i<n && s[i]==' '){
                            i++;
                    }
                    
            }
            n=st.size();
            for(int i=n-1;i>=0;i--){
                   ans+=st[i];
                    if(i!=0){
                            ans+=' ';
                    }
            }
            return ans;
    }
};