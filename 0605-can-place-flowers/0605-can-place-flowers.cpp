class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        int c=0;
            
            cout<<-1/2;
            int curr=0;
            int f=0;
            for(int i=0;i<v.size();i++){
                    if(v[i]==0){
                            curr++;
                    }
                    else{
                          if(f==0)  c+=(curr)/2;
                            else c+=(curr-1)/2;
                            curr=0;
                            f=1;
                    }
            }
            c+=curr/2;
            if(f==0){
                    return (v.size()+1)/2>=n;
            }
            return c>=n;
    }
};