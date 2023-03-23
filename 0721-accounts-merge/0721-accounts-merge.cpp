class Solution {
public:
vector<int> parent;
vector<int> rank;
    vector<vector<string>> accountsMerge(vector<vector<string>>& a) {
        unordered_map<string,int> m;
            rank.resize(a.size(),0);
            parent.resize(a.size());
            for(int i=0;i<a.size();i++){
                    parent[i]=i;
            }
          for(int i=0;i<a.size();i++){
                  for(int j=1;j<a[i].size();j++){
                          if(m.find(a[i][j])!=m.end()){
                                  unionByRank(i,m[a[i][j]]);
                          }
                          else{
                                  m[a[i][j]]=i;
                          }
                  }
          }
                vector<string> v[a.size()];
                  for(auto it:m){
                          int up=findUPar(it.second);
                          v[up].push_back(it.first);
                  }
                  vector<vector<string>> ans;
                  for(int i=0;i<a.size();i++){
                          if(v[i].size()>0){
                                  sort(v[i].begin(),v[i].end());
                                 vector<string> temp;
                                  temp.push_back(a[i][0]);
                                  
                                 for(auto it:v[i]){
                                         temp.push_back(it);
                                 }
                                 ans.push_back(temp); 
                          }
                  }
                  return ans;
          }
    
int findUPar(int node) {
        //height comperssion and finding parent
        if(node == parent[node])   return node;   
        else    return parent[node] = findUPar(parent[node]);       
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v; 
        }
        else if(rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u; 
        }
        else {
            parent[ulp_v] = ulp_u; 
            rank[ulp_u]++; 
        }
    }
};