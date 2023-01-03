class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        int ans=0;
            for(int i=0;i<s[0].size();i++){
                    for(int j=0;j<s.size()-1;j++){
                            if(s[j][i]-'a'>s[j+1][i]-'a'){
                                    ans++; break;
                            }
                    }
            }
            return ans;
    }
};