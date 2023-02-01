class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        int n1=s1.size();
            int n2=s2.size();
            int n=lcm(n1,n2);
            string s=s1.substr(0,n);
            for(int i=0;i<n1;i+=n){
                    if(s1.substr(i,n)!=s){
                            return "";
                    }
            }
             for(int i=0;i<n2;i+=n){
                    if(s2.substr(i,n)!=s){
                            return "";
                    }
            }
            return s;
            
    }
int lcm(int n1,int n2){
     int ans=1;
        for(int i=1;i<=n1;i++){
         if(n1%i==0 && n2%i==0){
                 ans=i;
         }
        }
        return ans;
}
};