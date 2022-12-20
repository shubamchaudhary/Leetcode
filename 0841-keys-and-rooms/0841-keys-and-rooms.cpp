class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> v(rooms.size(),false);
            
            dfs(rooms,v,0);
            for(int i=0;i<v.size();i++){
                    if(v[i]==false){
                            return false;
                    }
            }
            return true;
    }
void dfs(vector<vector<int>>& rooms,vector<bool> &v,int ind){
        if(v[ind]==true){
                return;
        }
        v[ind]=true;
        for(int i=0;i<rooms[ind].size();i++){
                
                dfs(rooms,v,rooms[ind][i]);
               
        }
}
};