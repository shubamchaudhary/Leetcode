class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
            if(n==1 && t.size()==0){
                    return 1;
            }
            
        unordered_map<int,int> m;
            for(int i=0;i<t.size();i++){
                    m[t[i][0]]++;
            }
             unordered_map<int,vector<int>> mp;
            for(int i=0;i<t.size();i++){
                   mp[t[i][1]].push_back(t[i][0]);
            }
            for(auto it:mp){
                    if(it.second.size()==n-1 && m.find(it.first)==m.end()){
                            return it.first;
                    }
            }
            return -1;
    }
};