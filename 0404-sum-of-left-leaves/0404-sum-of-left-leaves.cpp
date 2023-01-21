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
    int sumOfLeftLeaves(TreeNode* root) {
        unordered_map<int,int> m;
            f(m,root,0,0);
            int ans=0;
            for(auto it:m){
                    ans+=it.second;
                    cout<<it.second<<" ";
            }
            return ans;
    }
        // for call 1=left    2=right
void f(unordered_map<int,int> &m,TreeNode* root,int lev,int call){
        if(root==NULL){
                return;
        }
        if(root->left==NULL && root->right==NULL){
              if(call==1)  {m[lev]+=root->val;}
                return;
        }
       
        f(m,root->right,lev+1,2);
         f(m,root->left,lev+1,1);
}
};