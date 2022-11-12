class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
            for(int i=0;i<arr.size();i++){
                    m[arr[i]]++;
            }
           priority_queue<int> pq;
            for(auto it:m){
                    pq.push(it.second);
            }
            int ans=0;
            int c=0;
            while(ans<arr.size()/2){
                    ans+=pq.top();
                    pq.pop();
                    c++;
            }
            return c;
    }
};