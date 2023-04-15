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
    int maxLevelSum(TreeNode* root) {
        
            queue<TreeNode*> q;
            q.push(root);
            int lev=0;
            int ans=1;
            int maxi=root->val;
            while(q.size()!=0){
                    lev++;
                    int size=q.size();
                    int sum=0;
                    for(int i=0;i<size;i++){
                            sum+=q.front()->val;
                            TreeNode* node=q.front();
                            q.pop();
                            if(node->left)q.push(node->left);
                            if(node->right)q.push(node->right);
                            
                    }
                   // cout<<sum<<" "<<lev;
                        if(sum>maxi){
                                maxi=sum;
                                ans=lev;
                        }
            }
            return ans;
    }
};