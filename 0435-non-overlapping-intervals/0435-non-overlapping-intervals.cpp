class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& v) {
            for(int i=0;i<v.size();i++){
                    swap(v[i][0],v[i][1]);
            }
        sort(v.begin(),v.end());
             for(int i=0;i<v.size();i++){
                    swap(v[i][0],v[i][1]);
            }
            int maxi=INT_MIN;
            if(v.size()<2){
                return 0;
            }
                     int c=0;
                    int st=v[0][0];
                    int en=v[0][1];
            for(int i=1;i<v.size();i++){
                    if(v[i][0]>=en){
                            st=v[i][0];
                            en=v[i][1];
                    }
                    else{
                            c++;
                    }
                   
            }
            return c;
    }
};