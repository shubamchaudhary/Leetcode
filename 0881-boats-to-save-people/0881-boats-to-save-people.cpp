class Solution {
public:
    int numRescueBoats(vector<int>& p, int t) {
        sort(p.begin(),p.end());
        int l=0;
           /* for(int i=0;i<p.size();i++){
                    cout<<p[i]<<",";
            }*/
        int r=p.size()-1;
            int ans=0;
        while(l<=r){
         if(p[r]+p[l]<=t){
                // cout<<"sec"<<endl;
                   r--;
                   l++;
           }
         
          else{
                  //cout<<"for"<<endl;
                  r--;
                }
                ans++;
        }
            return ans;
    }
};