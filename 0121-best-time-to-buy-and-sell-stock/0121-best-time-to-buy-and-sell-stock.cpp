class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int b=arr[0];
        int p=0;
        for(int i=1;i<arr.size();i++){ 
                p=max(p,arr[i]-b);
                b=min(b,arr[i]);
        }
            return p;
    }
};