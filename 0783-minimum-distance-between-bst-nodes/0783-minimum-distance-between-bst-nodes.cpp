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
    int minDiffInBST(TreeNode* root) {
       vector<int> v;
           // sort(v.begin(),v.end());
            f(root,v);
            int mini=INT_MAX;
            for(int i=0;i<v.size()-1;i++){
                    mini=min(mini,v[i+1]-v[i]);
            }
            return mini;
    }
void f(TreeNode* root,vector<int> &v){
       if(root==NULL){
               return;
       }
     
        f(root->left,v);
        if(root==NULL){
               return;
       }
         v.push_back(root->val);
        f(root->right,v);
}
};