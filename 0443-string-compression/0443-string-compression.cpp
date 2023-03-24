class Solution {
public:
    int compress(vector<char>& chars) {
        int ind=0;
            vector<char> v;
            if(chars.size()==0){
                    return chars.size();
            }
           char prev=chars[0];
            int ans=0;
            int c=1;
            for(int i=1;i<chars.size();i++){
                 if(chars[i]==prev){
                         c++;
                 }  
                    else{
                         ans=ans+1+c%1;
                            
                            chars[ind]=prev;
                            ind++;
                            if(c>1){
                                    string st=to_string(c);
                                   for(int j=0;j<st.size();j++){
                                           chars[ind]=st[j];
                                           ind++;
                                           //v.push_back(st[j]);
                                   }
                            }
                            prev=chars[i];
                            c=1;
                    }
            }
            chars[ind]=prev;
            ind++;
            // v.push_back(prev);
                            if(c>1){
                                    string st=to_string(c);
                                   for(int j=0;j<st.size();j++){
                                          chars[ind]=st[j];
                                           ind++;
                                   }
                            }
           for(int i=0;i<v.size();i++){
                   cout<<v[i]<<" ";
           }
                return ind;
    }
};