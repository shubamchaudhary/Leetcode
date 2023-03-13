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
    long long kthLargestLevelSum(TreeNode* root, int k) {
            int maxi=0;
            ht(maxi,root,0);
            cout<<maxi;
            if(k>maxi){
                    return -1;
            }
            vector<long long> v(maxi,0);
           f(root,v,0);
            nth_element(begin(v), begin(v) + k - 1, end(v), greater<>());
            return v[k-1];
            
    }
void f(TreeNode* &root,vector<long long> &v,int lev){
        if(root==NULL){
                return;
        }
        v[lev]+=root->val;
        f(root->left,v,lev+1);
        f(root->right,v,lev+1);
}
void ht(int &maxi,TreeNode* &root,int lev){
        if(root==NULL){
        maxi=max(maxi,lev);
                return;
        }
        ht(maxi,root->left,lev+1);
        ht(maxi,root->right,lev+1);
}
};