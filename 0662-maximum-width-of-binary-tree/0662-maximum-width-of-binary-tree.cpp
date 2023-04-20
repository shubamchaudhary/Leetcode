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
       // long long long=-1e62;
    int widthOfBinaryTree(TreeNode* root) {
            queue<TreeNode*> q;
            vector<vector<TreeNode*>> v;
            unordered_map<TreeNode*,long long> m;
            m[root]=1;
           // f(root,m);
            q.push(root);
            //int maxi=0;
            while(q.size()>0){
                    int size=q.size();
                    vector<TreeNode*> t;
                    int front=m[q.front()];
                    for(int i=0;i<size;i++){
                             TreeNode* node=q.front();
                            
                             TreeNode* back=q.back();
                            // int val=m[node]-
                           
                                if(node->left){
                                        m[node->left]=m[node]*2-front;
                                } 
                                if(node->right){
                                         m[node->right]=m[node]*2+1-front;
                                 }
                            
                             
                                /*if(node->right){
                                        m[node->right]=m[node]*2+1-front;
                                } 
                                else if(node->left){
                                        m[node->left]=m[node]*2-front;
                                }*/
                            
                         t.push_back(node);
                            q.pop();
                            if(node->left){
                                    q.push(node->left);
                            }
                             if(node->right){
                                    q.push(node->right);
                            }
                            
                    }
                    v.push_back(t);
            }
            int maxi=0;
            /*for(int i=0;i<v.size();i++){
                    for(int j=0;j<v[i].size();j++){
                            cout<<v[i][j]->val<<" ";
                    }
                    cout<<endl;
            }*/
             for(int i=0;i<v.size();i++){
                     int temp=m[v[i][v[i].size()-1]]-m[v[i][0]];
                    // cout<<m[v[i][v[i].size()-1]]<<" "<<m[v[i][0]]<<endl;
                    maxi=max(maxi,temp);
            }
        return maxi+1;
    }
/*void f(TreeNode* root,unordered_map<TreeNode*,long long> &m){
        if(root==NULL){
                return;
        }
        if(root->left){
                m[root->left]=2*m[root];
        }
         if(root->right){
                m[root->right]=2*m[root]+1;
        }
        f(root->left,m);
        f(root->right,m);
}*/
};