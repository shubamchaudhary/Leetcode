class Solution {
public:
    string convert(string s, int nr) {
        int n=s.size();
            vector<vector<char>> v(nr,vector<char>(n,'*'));
           int ind=0;
            int c=0;
           while(ind<n){
                    for(int i=0;i<nr;i++){
                            if(ind>=n){
                                    break;
                            }
                          v[i][c]=s[ind];
                            ind++;
                            
                    }
                    for(int i=nr-2;i>=1;i--){
                            if(ind>=n){
                                    break;
                            }
                          c++;
                            v[i][c]=s[ind];
                            ind++;
                            
                    }
                    c++;
                    
            }
            string ans;
            for(int i=0;i<nr;i++){
                    for(int j=0;j<n;j++){
                            if(v[i][j]!='*' ){
                                    ans.push_back(v[i][j]);
                            }
                    }
                    
            }
            return ans;
    }
};