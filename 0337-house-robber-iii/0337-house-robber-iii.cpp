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
    int rob(TreeNode* root) {
       
            int height=h(root);
             unordered_map<TreeNode*,int> dp;
            return f(dp,root,0);
    }
int f(unordered_map<TreeNode*,int> &dp,TreeNode* root,int he){
        if(root==NULL){
                return NULL;
        }
        if(dp.find(root)!=dp.end()){
              return dp[root];  
        }
        int t=root->val;
        int nt=0;
        
        if(root->right!=NULL){
                t=t+f(dp,root->right->right,he+1)+f(dp,root->right->left,he+1);
        }
        if(root->left!=NULL){
                t=t+f(dp,root->left->right,he+1)+f(dp,root->left->left,he+1);
        }
        nt=f(dp,root->right,he+1)+f(dp,root->left,he+1);
        
        int ans= max(t,nt);
        dp[root]=ans;
        return ans;
}
int h(TreeNode* root){
        if(root==NULL){
                return 0;
        }
        return 1+max(h(root->left),h(root->right));
}
};