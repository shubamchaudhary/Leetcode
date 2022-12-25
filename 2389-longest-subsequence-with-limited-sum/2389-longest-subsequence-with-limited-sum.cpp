class Solution {
public:
    vector<int> answerQueries(vector<int>& arr, vector<int>& q) {
        sort(arr.begin(),arr.end());
            
            for(int i=1;i<arr.size();i++){
                    arr[i]=arr[i]+arr[i-1];
            }
            vector<int> ans;
            for(int i=0;i<q.size();i++){
                    int c=0;
                    int ind=0;
                    while(ind<arr.size() && arr[ind]<=q[i]){
                            c++;
                            ind++;
                    }
                    ans.push_back(c);
            }
            return ans;
    }
};