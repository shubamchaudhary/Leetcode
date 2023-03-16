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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int index=inorder.size()-1;
            TreeNode* root=new TreeNode();
            TreeNode* k=root;
            root->val=postorder[index];
            f(inorder,postorder,index,root);
            
            return k;
    }
        public:
        void f(vector<int> in,vector<int> &pos,int &index,TreeNode* &node){
                if(index<=0){
                        return;
                }
                if(in.size()==0){
                       int t=index+1;
                        index=t;
                        return;
                }
                int b;
                vector<int> l;
                vector<int> r;
                for(int i=0;i<in.size();i++){
                        if(pos[index]==in[i]){
                                b=i;
                        }
                }
                for(int i=0;i<b;i++){
                        l.push_back(in[i]);
                }
                for(int i=b+1;i<in.size();i++){
                        r.push_back(in[i]);
                }
                    if(r.size()!=0){
                        TreeNode* nr=new TreeNode();
                        node->right=nr;
                         int k2=index-1;
                        index=k2;
                        nr->val=pos[index];
                        f(r,pos,index,nr);
                }
                if(l.size()!=0){
                        TreeNode* nl=new TreeNode();
                        node->left=nl;
                        int k1=index-1;
                        index=k1;
                        nl->val=pos[index];
                        f(l,pos,index,nl);
                }
             
                
        }
};