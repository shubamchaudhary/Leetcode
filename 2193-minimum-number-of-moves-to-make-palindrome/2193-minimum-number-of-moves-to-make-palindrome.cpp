class Solution {
public:
    int minMovesToMakePalindrome(string s) {
            unordered_map<char,int> m;
            for(int i=0;i<s.size();i++){
                    m[s[i]]++;
            }
            int freq=-2;
            char c='{';
            for(auto it:m){
                    if(it.second%2==1){
                            freq=it.second/2;
                            c=it.first;
                    }
            }
            int same= f(s,0,s.size()-1,c,freq);
            reverse(s.begin(),s.end());
            int rev=f(s,0,s.size()-1,c,freq);
            return min(same,rev);
    }
int f(string s,int l,int r,char c,int freq){
        if(l>=r){
                return 0;
        }
        if(s[l]==s[r]){
               if(s[l]==c)  return f(s,l+1,r-1,c,freq-1);
        }
        //int c=0;
        if(freq==0 && s[l]==c){
                return s.size()/2-l+f(s,l+1,r,c,freq);
        }
         if(freq==0 && s[r]==c){
                return r-s.size()/2+f(s,l,r-1,c,freq);
        }
        int ind=r;
        while(s[l]!=s[ind]){
                ind--;
        }
        for(int i=ind;i<r;i++){
                swap(s[i],s[i+1]);
        }
        //cout<<r-ind<<" ";
       if(s[l]==c) return (r-ind)+f(s,l+1,r-1,c,freq-1);
       else return (r-ind)+f(s,l+1,r-1,c,freq);
        
}
};