class Solution {
public:
 
int dfs(vector<vector<int>> &adj,int node,string &s,int &maxpath){
      int maxval=0;
        int smaxval=0;
        for(int i=0;i<adj[node].size();i++){
               int lp=dfs(adj,adj[node][i],s,maxpath);
                if(s[node]==s[adj[node][i]]){
                                  continue;}
                if(lp>maxval){
                        smaxval=maxval;
                        maxval=lp;
                }
                else if(lp>smaxval){
                        smaxval=lp;
                }
                
        }
      maxpath=max(maxpath,1+maxval+smaxval);
      //  cout<<maxval<< " "<<smaxval<<"     "; 
        return maxval+1;
}
int longestPath(vector<int>& p, string s) {
        vector<vector<int>> adj(p.size());
            for(int i=1;i<p.size();i++){
                    adj[p[i]].push_back(i);
            }
            int maxpath=1;
        dfs(adj,0,s,maxpath);
        
            return maxpath;
    }
};