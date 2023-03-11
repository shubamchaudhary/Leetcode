/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
            vector<int> v;
            if(head==NULL){
                    return NULL;
            }
            while(head!=NULL){
                    v.push_back(head->val);
                    head=head->next;
            }
            TreeNode* root=new TreeNode();
            root->val=v[v.size()/2];
            left(v,0,v.size()/2-1,root);
            right(v,v.size()/2+1,v.size()-1,root);
            return root;
    }
void left(vector<int> &v,int f,int l,TreeNode* root){
       if(f>l){
               return;
       }
        int n=(l+f+1)/2;
        TreeNode* lft=new TreeNode();
        lft->val=v[n];
        root->left=lft;
       if(n>0) left(v,f,n-1,lft);
        if(n<v.size()-1) right(v,n+1,l,lft);
}
void right(vector<int> &v,int f,int l,TreeNode* root){
       if(f>l){
               return;
       }
        int n=(l+f+1)/2;
        TreeNode* ryt=new TreeNode();
        ryt->val=v[n];
        root->right=ryt;
       if(n>0) left(v,f,n-1,ryt);
       if(n<v.size()-1) right(v,n+1,l,ryt);
}
};