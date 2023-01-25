class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> b(n,false);
            for(int i=0;i<edges.size();i++){
                    b[edges[i][1]]=true;
            }
            vector<int> ans;
            for(int i=0;i<b.size();i++){
                    if(b[i]==false){
                            ans.push_back(i);
                    }
            }
            return ans;
    }
};