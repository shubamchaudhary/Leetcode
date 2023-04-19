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
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
 
        if (hash1 != hash2) {
            return hash1 ^ hash2;             
        }
         
        // If hash1 == hash2, their XOR is zero.
          return hash1;
    }
};
class Solution {
public:
    int longestZigZag(TreeNode* root) {
            unordered_map<pair<TreeNode*,int>,int,hash_pair> m;
        return f(m,root,2)-1;
    }
int f(unordered_map<pair<TreeNode*,int>,int,hash_pair> &m,TreeNode* root,int prev){
        //if prev==0 =>prev=left
        //if prev==1 =>prev=right
        //if prev==2 =>starting node
        if(root==NULL){
                return 0;
        }
       if(m.find({root,prev})!=m.end()){
                return m[{root,prev}];
        }
       int ans=0;
        if(prev==0){
                ans=1+f(m,root->right,1);
        }
        else  if(prev==1){
                ans=1+f(m,root->left,0);
        }
        else{
             ans=max(1+max(f(m,root->left,0),f(m,root->right,1)),max(f(m,root->left,2),f(m,root->right,2)));
            
        }
        return m[{root,prev}]=ans;
}
};