class Solution {
public:
    int tribonacci(int n) {
            if(n<2){
                    return n;
            }
        int f=0;
         int s=1;
         int t=1;
            for(int i=3;i<=n;i++){
                    int temp=t;
                    t=t+s+f;
                    f=s;
                    s=temp;
                  
            }
            return t;
    }
};