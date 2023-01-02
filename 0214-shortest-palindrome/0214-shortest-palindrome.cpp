class Solution {
public:
    string shortestPalindrome(string s) {
        int maxi=-1;
            if(s.size()<2){
                    return s;
            }
            int fl=1;
           int fir=0;
            int las=s.size()-1;
            while(fir<las){
                    if(s[fir]==s[las]){
                            fir++;
                            las--;
                    }
                    else{
                            fl=0;
                            break;
                    }
            }
            if(fl==1){
                    return s;
            }
            for(int i=s.size()/2;i>=0;i--){
                    int f=i;
                    int l=i;
                    int ti=i;
                    while(f>=0 && l<s.size() && s[f]==s[l]){
                            f--;
                            l++;
                    }
                    if(f==-1){
                            
                            maxi=max(maxi,l);
                            break;
                    }
            }
              for(int i=s.size()/2;i>=0;i--){
                    int f=i;
                    int l=i+1;
                    
                    while(f>=0 && l<s.size() && s[f]==s[l]){
                            f--;
                            l++;
                    }
                    if(f==-1){
                           
                             maxi=max(maxi,l);
                            break;
                    }
            }
            
            cout<<maxi;
            string temp;
            for(int i=s.size()-1;i>=maxi;i--){
                    temp.push_back(s[i]);
            }
            return temp+s;
    }
};