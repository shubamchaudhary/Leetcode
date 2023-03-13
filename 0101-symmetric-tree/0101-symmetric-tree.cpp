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
    bool isSymmetric(TreeNode* root) {
            if(root==NULL)return true;
        TreeNode* left=root->left;
        TreeNode* right=root->right;
            int c=1;
            check(left,right,c);
            return c;
        
        
    }
void check(TreeNode* left,TreeNode* right,int &c){
        if(left==NULL && right==NULL){
                return;
        }
        if((left==NULL  && right!=NULL ) || (left!=NULL  && right==NULL ) || (left->val!=right->val)){
                int t=0;
                c=t;
                cout<<1;
                return;
        }
        
        check(left->left,right->right,c);
        check(left->right,right->left,c);
}
};