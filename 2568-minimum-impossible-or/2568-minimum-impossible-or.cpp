class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_map<int,int> m;
            for(int i=0;i<nums.size();i++){
                    m[nums[i]]++;
            }
            int i=1;
            while(true){
                    if(m.find(i)==m.end()){
                            return i;
                    }
                    i*=2;
            }
        
    }
};