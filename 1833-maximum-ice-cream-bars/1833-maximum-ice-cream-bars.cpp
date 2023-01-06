class Solution {
public:
    int maxIceCream(vector<int>& a, int c) {
        sort(a.begin(),a.end());
            int count=0;
            int ind=0;
            while(ind<a.size() && c>0){
                   if(c>=a[ind]){
                           c-=a[ind];
                           ind++;
                           count++;
                           
                   } 
                    else{
                            break;
                    }
            }
            return count;
    }
};