class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
            vector<int> ans;
            int ind=num.size()-1;
          while(k>0 || ind>=0){
                  if(ind>=0 && k>0){
                  ans.push_back((num[ind]+k)%10);
                  k=(num[ind]+k)/10;
                  ind--;}
                  else if(ind<0){
                      ans.push_back((k)%10);
                  k=(k)/10;
                       
                  }
                  else{
                       ans.push_back(num[ind]);
                  
                          ind--;
                  }
          }
            reverse(ans.begin(),ans.end());
            return ans;
    }
};