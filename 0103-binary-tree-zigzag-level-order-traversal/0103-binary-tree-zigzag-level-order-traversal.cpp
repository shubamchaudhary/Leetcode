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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
            if(root==NULL){
                    return ans;
            }
            queue<TreeNode*> q;
             vector<int> v;
            q.push(root);
            int c=1;
            while(q.size()!=0){
                    int size=q.size();
                   
                    for(int i=0;i<size;i++){
                            TreeNode* node=q.front();
                            
                            if(node->left!=NULL){
                                    q.push(node->left);
                            }
                             if(node->right!=NULL){
                                    q.push(node->right);
                            }
                           
                            v.push_back(node->val);
                            q.pop();
                    }
                    if(c%2==0){
                            reverse(v.begin(),v.end());
                    }c++;
                    ans.push_back(v);
                    v.clear();
            }
            return ans;
    }
};