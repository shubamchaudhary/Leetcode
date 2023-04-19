/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,vector<int>> adj;
            //if(root->left==NULL && root->right==NULL){
              //      return 0;
           // }
            makeadj(adj,root);
            unordered_map<int,int> dis;
            for(auto it:adj){
                    dis[it.first]=1e9;
            }
        priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
         pq.push({0,start});
         dis[start]=0;
        while(pq.size()>0){
            int d=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(int i=0;i<adj[node].size();i++){
                if(d+1<dis[adj[node][i]]){
                    pq.push({d+1,adj[node][i]});
                    dis[adj[node][i]]=d+1;
                }
            }
        }
         /*  for(int i=0;i<adj.size();i++){
                for(int j=0;j<adj[i].size();j++){
                        cout<<adj[i][j]<<" ";
                }
                   cout<<endl;
            }*/  
            int maxi=INT_MIN;
            for(int i=0;i<dis.size();i++){
                    maxi=max(maxi,dis[i]);
                   // cout<<dis[i]<<" ";
            }
            return maxi;
            
    }
void makeadj(unordered_map<int,vector<int>> &adj,TreeNode* &root){
        if(root==NULL){
                return;
        }
        if(root->left){
                adj[root->val].push_back(root->left->val);
                adj[root->left->val].push_back(root->val);
        }
          if(root->right){
                adj[root->val].push_back(root->right->val);
                adj[root->right->val].push_back(root->val);
        }
        makeadj(adj,root->left);
        makeadj(adj,root->right);
}
};