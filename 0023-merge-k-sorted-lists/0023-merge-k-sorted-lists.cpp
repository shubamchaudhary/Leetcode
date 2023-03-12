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
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& list) {
            vector<ListNode*> li;
            for(int i=0;i<list.size();i++){
                    if(list[i]!=NULL){
                            li.push_back(list[i]);
                    }
            }
        int n=li.size();
            vector<int> v;
            if(li.size()==0){
                    return NULL;
            }
           
         ListNode* t=li[0];
          
        for(int i=0;i<n;i++){
        
               
                while(t->next!=NULL){
                        v.push_back(t->val);
                        t=t->next;
                        
                }
                
                if(i!=n-1){
                        t->next=li[i+1];
                }
                else{
                        v.push_back(t->val);
                }
        }
           
           sort(v.begin(),v.end());
            t=li[0];
            for(int i=0;i<v.size();i++){
                    cout<<v[i];
            }
            int i=0;
            while(t!=NULL){
                   t->val=v[i];
                    t=t->next;
                    i++;
            }
          /* for(int i=0;i<v.size();i++){
                   li[0]->val=v[i];
                   li[0]=li[0]->next;
            }*/
            return li[0];
            
    }
};