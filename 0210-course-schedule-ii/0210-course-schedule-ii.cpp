class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
         vector<vector<int>> adj(n);
            for(int i=0;i<pre.size();i++){
                    adj[pre[i][0]].push_back(pre[i][1]);
            }
         
            return sol(n,adj);
    }
vector<int> sol(int n,vector<vector<int>> &adj){
        vector<int> indeg(n,0);
        vector<int> ans;
        for(int i=0;i<indeg.size();i++){
         for(int j=0;j<adj[i].size();j++){
                 indeg[adj[i][j]]++;
         }
        }
        
        queue<int> q;
        int count=0;
        for(int i=0;i<indeg.size();i++){
                if(indeg[i]==0){
                        q.push(i);
                        ans.push_back(i);
                }
        }
       while(q.size()!=0){
                int node=q.front();
                q.pop();
                for(int i=0;i<adj[node].size();i++){
                        indeg[adj[node][i]]--;
                        if(indeg[adj[node][i]]==0){
                                //count++;
                                ans.push_back(adj[node][i]);
                                q.push(adj[node][i]);
                        }
                }
        }
        if(ans.size()==n){
                reverse(ans.begin(),ans.end());
                return ans;
        }
        return {};
}
};