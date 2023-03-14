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
    int sumNumbers(TreeNode* root) {
        int sum=0;
         f(root,sum,0);
           return sum;
    }
void f(TreeNode* root,int &sum,int curr){
        if(root==NULL){
          return ;
        }
        if(root->left==NULL && root->right==NULL){
                sum=sum+curr*10+root->val;
                return;
        }
        f(root->left,sum,curr*10+root->val);
        f(root->right,sum,curr*10+root->val);
}
};