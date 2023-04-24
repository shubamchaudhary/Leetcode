class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        priority_queue<int> pq;
            int n=nums.size();
            for(int i=0;i<n;i++){
                    pq.push(nums[i]);
            }
            while(pq.size()>1){
                    int f=pq.top();
                    pq.pop();
                    int s=pq.top();
                    pq.pop();
                    if(f!=s){
                            pq.push(f-s);
                    }
            }
            if(pq.size()==0){
                    return 0;
            }
            return pq.top();
    }
};