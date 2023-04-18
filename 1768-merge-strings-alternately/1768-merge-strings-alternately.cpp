class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i1=0;
            int i2=0;
            string ans;
            while(i1<w1.size() || i2<w2.size()){
                    if(i1<w1.size() && i2<w2.size()){
                            ans.push_back(w1[i1]);
                            ans.push_back(w2[i2]);
                            i1++;
                            i2++;
                    }
                    else if(i1<w1.size()){
                             ans.push_back(w1[i1]);
                            i1++;
                    }
                    else{
                           ans.push_back(w2[i2]);
                            i2++;  
                    }
            }
            return ans;
    }
};