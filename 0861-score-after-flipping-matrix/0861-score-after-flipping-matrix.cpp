class Solution {
public:
    int matrixScore(vector<vector<int>>& m) {
        int ans=0;
            //cout<<m[0].size();
            for(int i=0;i<m.size();i++){
                    if(m[i][0]==0){
                            for(int j=0;j<m[0].size();j++){
                                    if(m[i][j]==0){
                                       m[i][j]=1;     
                                    }
                                    else{
                                         m[i][j]=0;   
                                    }
                            }
                    }
            }
            
            for(int i=1;i<m[0].size();i++){
                    int sum=0;
                    for(int j=0;j<m.size();j++){
                            sum+=m[j][i];
                    }
                    //cout<<sum;
                    if(sum<=m.size()/2){
                        for(int j=0;j<m.size();j++){
                             if(m[j][i]==0){
                                       m[j][i]=1;     
                                    }
                                    else{
                                         m[j][i]=0;   
                                    }
                    }     
                    }
            }
            /*for(int i=0;i<m.size();i++){
                    for(int j=0;j<m[0].size();j++){
                           cout<<m[i][j]<<" ";
                    }
                    cout<<endl;
            }*/
            for(int i=0;i<m.size();i++){
                    int sum=0;
                    for(int j=0;j<m[0].size();j++){
                            sum+=m[i][m[0].size()-1-j]*pow(2,j);
                    }
                    ans+=sum;
            }
            return ans;
    }
};


















