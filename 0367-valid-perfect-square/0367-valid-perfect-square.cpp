class Solution {
public:
    bool isPerfectSquare(int n) {
            long int i;
        for(i=0;i*i<=n;i++){
                if(i*i==n){
                        return true;
                }
                
        }
            return false;
    }
};