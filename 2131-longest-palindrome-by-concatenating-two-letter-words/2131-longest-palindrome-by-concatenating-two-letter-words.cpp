class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> m;
            int ans=0;
            int flag=0;
            for(int i=0;i<words.size();i++){
                  string t=words[i];
                    swap(t[0],t[1]);
                    if(m.find(t)!=m.end()){
                            if(m[t]>1){
                                    ans+=2;
                                 m[t]--;
                            }
                            else{
                                    ans+=2;
                                      m.erase(t);
                            }
                    }
                    else{
                           
                                    m[words[i]]++;
                            
                    }
            }
            for(auto it:m){
                    if(it.first[1]==it.first[0]){
                            flag=2;
                            break;
                    }
            }
            return ans*2+flag;
           
    }
};