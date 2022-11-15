class Solution {
public:
    int findTheDistanceValue(vector<int>& a1, vector<int>& a2, int d) {
       vector<bool> v(a1.size(),true);
            for(int i=0;i<a1.size();i++){
                    for(int j=0;j<a2.size();j++){
                            int t=abs(a1[i]-a2[j]);
                            if(t<=d){
                                v[i]=false;
                            }
                    }
            }
            int c=0;
            for(int i=0;i<a1.size();i++){
                    if(v[i]==true){
                            c++;
                    }
            }
            return c;
    }
};