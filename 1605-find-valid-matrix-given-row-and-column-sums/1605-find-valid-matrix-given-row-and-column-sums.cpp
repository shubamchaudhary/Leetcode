class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& row, vector<int>& col) {
        int r=row.size();
            int c=col.size();
            vector<vector<int>> ans(r,vector<int>(c,0));
            for(int i=0;i<r;i++){
                    for(int j=0;j<c;j++){
                            if(row[i]>=col[j]){
                                    ans[i][j]=col[j];
                                    row[i]-=col[j];
                                    col[j]=0;
                                    
                            }
                             else{
                                    ans[i][j]=row[i];
                                    col[j]-=row[i];
                                    row[i]=0;
                                    
                            }
                    }
            }
            return ans;
    }
};