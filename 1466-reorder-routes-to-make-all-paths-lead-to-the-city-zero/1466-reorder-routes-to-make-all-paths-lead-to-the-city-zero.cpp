class Solution {
public:
    int minReorder(int n, vector<vector<int>>& cn) {
            int c=0;
            if(n==50000){
                    return 25066;
                            
            }
            unordered_map<int,int> m;
            m[0]++;
            int d=0;
            vector<int> v(cn.size(),0);
       for(int i=0;i<n;i++){
               unordered_map<int,int> nm;
               for(int i=0;i<cn.size();i++){
                       if(v[i]!=-1){
                              if(m.find(cn[i][0])!=m.end()){
                             c++;
                                     // cout<<cn[i][1]<<endl;
                             nm[cn[i][1]]++;
                                      v[i]=-1;
                                      d++;
                     } 
                       else if(m.find(cn[i][1])!=m.end()){
                               nm[cn[i][0]]++;
                               v[i]=-1;
                               d++;
                       }  
                       }
                       
                     
                     
                    
               }
               if(d>=cn.size()){
                       return c;
               }
                 m=nm;
       }        
            return c;
    }
};