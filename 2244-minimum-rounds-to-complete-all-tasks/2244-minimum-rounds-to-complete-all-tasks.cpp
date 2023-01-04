class Solution {
public:
    int minimumRounds(vector<int>& t) {
        unordered_map<int,int> m;
            for(int i=0;i<t.size();i++){
                    m[t[i]]++;
            }
            int ans=0;
            for(auto it:m){
                    if(it.second==1){
                            return -1;
                    }
                    else{
                            ans+=(it.second+2)/3;
                    }
            }
            return ans;
    }
};