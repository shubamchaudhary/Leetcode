class Solution {
public:
    int minTime(int n, vector<vector<int>>& arr, vector<bool>& ha) {
        unordered_map<int,int> m;
            for(int i=0;i<arr.size();i++){
                    if(m.find(arr[i][1])!=m.end()){
                            swap(arr[i][0],arr[i][1]);
                    }
                    m[arr[i][1]]=arr[i][0];
            }
          
           /* int sum=n*(n-1)/2;
            for(int i=0;i<arr.size();i++){
                    sum-=arr[i][1];
            }*/
            int ans=0;
            vector<bool> v(ha.size(),false);
           for(int i=0;i<ha.size();i++){
                   if(ha[i]==true){
                           int f=i;
                           while(f!=0){
                                   v[f]=true;
                                   f=m[f];
                           }
                           // v[f]=true;
                   }
           }
            for(int i=0;i<v.size();i++){
                    if(v[i]==true){
                            ans+=2;
                    }
            }
            return ans;
    }
};