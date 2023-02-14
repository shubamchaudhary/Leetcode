class Solution {
public:
    string addBinary(string a, string b) {
        int i1=a.size()-1;
            int i2=b.size()-1;
            int carry=0;
            string ans;
            
            while(i1>=0 || i2>=0 || carry>0){
                    if(i1>=0 && i2>=0){
                            int t=a[i1]-'0'+b[i2]-'0';
                           if(t+carry==0){
                                   ans.push_back('0');
                           }
                            else if(t+carry==1){
                                    if(carry==1){
                                            carry=0;
                                    }
                                    ans.push_back('1');
                            }
                             else if(t+carry==2){
                                    ans.push_back('0');
                                     carry=1;
                            }
                             else if(t+carry==3){
                                    ans.push_back('1');
                                     carry=1;
                            }
                            i1--;
                            i2--;
                            
                    }
                    
                    
                       else if(i1>=0){
                            int t=a[i1]-'0';
                           if(t+carry==0){
                                   ans.push_back('0');
                           }
                            else if(t+carry==1){
                                    if(carry==1){
                                            carry=0;
                                    }
                                    ans.push_back('1');
                            }
                             else if(t+carry==2){
                                    ans.push_back('0');
                                     carry=1;
                            }
                             else if(t+carry==1){
                                    ans.push_back('1');
                                     carry=1;
                            }
                            i1--;
                    }
                    
                     
                       else if(i2>=0){
                            int t=b[i2]-'0';
                           if(t+carry==0){
                                   ans.push_back('0');
                           }
                            else if(t+carry==1){
                                    if(carry==1){
                                            carry=0;
                                    }
                                    ans.push_back('1');
                            }
                             else if(t+carry==2){
                                    ans.push_back('0');
                                     carry=1;
                            }
                             else if(t+carry==1){
                                    ans.push_back('1');
                                     carry=1;
                            }
                            i2--;
                    }
                    
                    else{
                         if(carry==1){
                                 ans.push_back('1');
                                 carry=0;
                         }   
                            else{
                                    break;
                            }
                    }
                    
            }
            reverse(ans.begin(),ans.end());
            return ans;
    }
};