class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
            if(v.size()==0){
                    return 0;
            }
            int ans=0;
            int st=v[0][0];
            int en=v[0][1];
            for(int i=1;i<v.size();i++){
                    if(v[i][0]<=en){
                            st=v[i][0];
                            en=min(en,v[i][1]);
                    }
                    else{
                            ans++;
                            st=v[i][0];
                            en=v[i][1];
                    }
            }
            return ans+1;
    }
};