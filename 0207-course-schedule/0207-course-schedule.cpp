class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
       vector<vector<int>> adj(n);
            for(int i=0;i<pre.size();i++){
                    adj[pre[i][0]].push_back(pre[i][1]);
            }
          /*  for(int i=0;i<adj.size();i++){
                    for(int j=0;j<adj[i].size();j++){
                            cout<<adj[i][j]<<" ";
                    }
                    cout<<endl;
            }*/
            return sol(n,adj);
            
    }
bool sol(int n,vector<vector<int>> &adj){
        vector<int> indeg(n,0);
        for(int i=0;i<indeg.size();i++){
         for(int j=0;j<adj[i].size();j++){
                 indeg[adj[i][j]]++;
         }
        }
        /*for(int i=0;i<indeg.size();i++){
                cout<<indeg[i]<<" ";
        }*/
        queue<int> q;
        int count=0;
        for(int i=0;i<indeg.size();i++){
                if(indeg[i]==0){
                        q.push(i);
                        count++;
                }
        }
       while(q.size()!=0){
                int node=q.front();
                q.pop();
                for(int i=0;i<adj[node].size();i++){
                        indeg[adj[node][i]]--;
                        if(indeg[adj[node][i]]==0){
                                count++;
                                q.push(adj[node][i]);
                        }
                }
        }
        if(count==n){
                return true;
        }
        return false;
}

};