class Solution {
public:
        vector<int> rank,parent;
    int makeConnected(int n, vector<vector<int>>& c) {
        if(c.size()<n-1){
                return -1;
        }
            rank.resize(n,0);
            parent.resize(n);
      for(int i = 0;i<n;i++) {
            parent[i] = i;  
        }
         for(int i=0;i<c.size();i++){
                 unionByRank(c[i][0],c[i][1]);
         }
            unordered_map<int,int> m;
            for(int i=0;i<n;i++){
                    m[findUPar(i)]++;
            }
            return m.size()-1;
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