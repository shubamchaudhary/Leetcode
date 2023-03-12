class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        unordered_map<int,int> m;
            int x=0;
            m[0]=1;
            long long c=0;
            for(int i=0;i<nums.size();i++){
                x=x^nums[i];
                    if(x==0){
                            c+=m[0];
                            m[0]++;
                    }
                    else if(m.find(x)!=m.end()){
                            c+=m[x];
                            m[x]++;
                    }
                    else{
                            m[x]++;
                    }
            }
            return c;
    }
};