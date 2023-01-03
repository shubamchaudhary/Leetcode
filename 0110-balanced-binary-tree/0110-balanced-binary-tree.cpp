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
    bool isBalanced(TreeNode* root) {
           return h(root) !=-1;
    }
        
        
        public:
        int h(TreeNode* root){
                if(root==NULL){
                        return 0;
                }
                int r=h(root->right);
                if(r==-1){
                        return -1;
                }
                int l=h(root->left);
                if(l==-1){
                        return -1;
                }
                if(abs(l-r)>1){
                        return -1;}
                return max(r,l)+1;
        }
};