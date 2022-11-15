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
        
    int countNodes(TreeNode* r) {
       return f(r);
    }
        int f(TreeNode* r){
                if(r==NULL){
                        return 0;
                }
                else{
                       return 1+f(r->left)+f(r->right);
                }
        }
};