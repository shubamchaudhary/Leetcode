class Solution {
public:
    long long getDescentPeriods(vector<int>& p) {
        long long ans=0;
            long long c=1;
            int n=p.size();
            for(int i=0;i<n-1;i++){
                    if(p[i]-p[i+1]!=1){
                            ans+=c*(c+1)/2;
                            c=1;
                    }
                    else{
                            c++;
                    }
            }
            ans+=c*(c+1)/2;
            return ans;
    }
};