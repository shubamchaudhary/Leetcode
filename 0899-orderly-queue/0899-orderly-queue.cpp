class Solution {
public:
    string orderlyQueue(string s, int k) {
           if(k==1){
                   return k1(s);
           }
            else{
                    sort(s.begin(),s.end());
                    return s;
            }
    }
string k1(string s){
        string mini="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
        for(int i=0;i<s.size();i++){
                string t=s.substr(i,s.size()-i)+s.substr(0,i);
               if(t<mini){
                       mini=t;
               }
        }
    return mini; 
}
};