class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<map<char,int>> v;
            for(int i=0;i<str.size();i++){
                    map<char,int> m;
                    for(int j=0;j<str[i].size();j++){
                            m[str[i][j]]++;
                    }
                    v.push_back(m);
            }
            vector<vector<string>> ans;
            map<map<char,int>,vector<string>> mp;
            for(int i=0;i<str.size();i++){
                    mp[v[i]].push_back(str[i]);
            }
            for(auto it:mp){
                    ans.push_back(it.second);
            }
            return ans;
    }
};