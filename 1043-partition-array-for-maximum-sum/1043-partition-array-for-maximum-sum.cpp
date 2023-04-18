class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
            int ind=0;
            vector<int> dp(arr.size(),-1);
        return f(dp,arr,k,ind);
    }
int f(vector<int> &dp,vector<int> &arr,int k,int ind){
        if(ind>=arr.size()){
                return 0;
        }
        if(dp[ind]!=-1){
                return dp[ind];
        }
         int sum = INT_MIN;
        int max_ele = INT_MIN;
        int mind=arr.size();
        if(mind>ind+k){
                mind=ind+k;
        }
        for(int i=ind;i<mind;i++){
      
                max_ele = max(max_ele,arr[i]);
                sum = max(sum, f(dp,arr,k,i+1) + max_ele*(i+1-ind));
            
        }
        //cout<<maxi<<endl;
        return dp[ind]=sum;
}
};