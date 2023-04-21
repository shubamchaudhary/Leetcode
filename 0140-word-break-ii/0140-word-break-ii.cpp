class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& dict) {
        vector<string> ans;
            f(s,"",dict,ans,0);
            return ans;
    }
void f(string &s,string temp,vector<string> &dict,vector<string> &ans,int ind){
        if(ind>=s.size()){
                ans.push_back(temp);
                return;
        }
        for(int i=0;i<dict.size();i++){
                if(dict[i].size()<=s.size()-ind && s.substr(ind,dict[i].size())==dict[i]){
                        string t=temp;
                        temp=temp+dict[i];
                        if(ind+dict[i].size()<s.size()) temp=temp+" ";
                        f(s,temp,dict,ans,ind+dict[i].size());
                        temp=t;
                        //f(s,temp,dict,ans,ind+dict[i].size());
                }
        }
}
};