class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& gr) {
        vector<vector<int>> ans;
            vector<int> v;
              v.push_back(0);
            for(int i=0;i<gr[0].size();i++){
                  
                     f(gr,0,i,gr.size()-1,v,ans);
            }
           
            return ans;
    }
void f(vector<vector<int>>& gr,int oi,int ii,int n,vector<int> v,vector<vector<int>>& ans){
        if(gr[oi][ii]==n){
                v.push_back(n);
              ans.push_back(v);
                return;
        }
      v.push_back(gr[oi][ii]);
        for(int i=0;i<gr[gr[oi][ii]].size();i++){
                f(gr,gr[oi][ii],i,n,v,ans);
        }
}
};