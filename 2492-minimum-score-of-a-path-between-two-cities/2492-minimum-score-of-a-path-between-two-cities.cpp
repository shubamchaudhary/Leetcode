class Solution {
public:
vector<int> rank,parent;
    int minScore(int n, vector<vector<int>>& roads) {
        rank.resize(n+1,0);
        parent.resize(n+1);
          //  sort(roads.begin(),roads.end());
            for(int i=0;i<=n;i++){
                    parent[i]=i;
            }
           for(int i=0;i<roads.size();i++){
                   unionByRank(roads[i][0],roads[i][1]);
           }
            int mini=INT_MAX;
            int up=findUPar(1);
          for(int i=0;i<roads.size();i++){
                  if(findUPar(roads[i][0])==up){
                          mini=min(mini,roads[i][2]);
                  }
          }
            return mini;
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