class Solution {
public:
    int totalFruit(vector<int>& f) {
        int maxi=0;
            int n=f.size();
            int ind=0;
            unordered_map<int,int> m;
            for(int i=0;i<n;i++){
                    m[f[i]]++;
                    if(m.size()>2){
                            while(m.size()>2){
                                    if(m[f[ind]]==1){
                                            m.erase(f[ind]);
                                    }
                                    else{
                                            m[f[ind]]--;
                                    }
                                    ind++;
                            }
                            
                    }
                    int c=0;
                   for(auto it:m){
                         c+=it.second;  
                   }
                    maxi=max(maxi,c);
                    
            }
            return maxi;
    }
};