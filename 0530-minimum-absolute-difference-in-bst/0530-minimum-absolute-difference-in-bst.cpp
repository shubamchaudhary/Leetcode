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
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
            f(root,v);
            int mini=INT_MAX;
            for(int i=0;i<v.size()-1;i++){
                    mini=min(mini,v[i+1]-v[i]);
            }
            return mini;
    }
void f(TreeNode* r,vector<int> &v){
        if(r==NULL){
                return;
        }
        f(r->left,v);
         if(r==NULL){
                return;
        }
        v.push_back(r->val);
        f(r->right,v);
}
};