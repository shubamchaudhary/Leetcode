class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int i=d.size()-1;
       while(i>=0){
            if(d[i]==9){
                d[i]=0;
            i--;}
            else{
            d[i]++;
            return d;}
        }
        d[0]=1;
        d.push_back(0);
        for(i=1;i<d.size();i++){
d[i]=0;}
        return d;
    }
};