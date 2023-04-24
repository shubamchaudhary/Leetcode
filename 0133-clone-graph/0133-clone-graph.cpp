/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
unordered_map<Node*,Node*> m;
    Node* cloneGraph(Node* node) {
        if(node==NULL){
                return node;
        }
             dfs(node);
            return m[node];
            
    }
 void dfs(Node* node){
         Node* copy=new Node(node->val);
         m[node]=copy;
         for(auto it:node->neighbors){
                 if(m.find(it)!=m.end()){
                       copy->neighbors.push_back(m[it]);  
                 }
                 else{
                       dfs(it);
                        copy->neighbors.push_back(m[it]);
                 }
         }
        
 }
};