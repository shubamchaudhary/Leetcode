class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
            if(p.size()>s.size()){
                    return {};
            }
        unordered_map<char,int> m1;
            for(int i=0;i<p.size();i++){
                    m1[p[i]]++;
            }
            unordered_map<char,int> m2;
            for(int i=0;i<p.size();i++){
                    m2[s[i]]++;
            }
            vector<int> ans;
            int k=p.size();
            if(m2==m1){
                    ans.push_back(0);
            }
            for(int i=1;i<s.size()-k+1;i++){
                    if(m2[s[i-1]]==1){
                            m2.erase(s[i-1]);
                    }
                    else{
                            m2[s[i-1]]--;
                    }
                    m2[s[i+k-1]]++;
                    if(m1==m2){
                            ans.push_back(i);
                    }
                    
            }
            return ans;
    }
};