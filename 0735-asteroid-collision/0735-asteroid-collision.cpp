class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
            int prev;
            for(int i=0;i<a.size();i++){
                    if(st.size()==0 || st.top()*a[i]>=0 || (st.top()<=0 && a[i]>=0)){
                            st.push(a[i]);
                            //prev=a[i];
                            cout<<i<<" if"<<endl;
                    }
                    else{
                            int f=0;
                            cout<<i<<" else if"<<endl;
                           if(abs(st.top())>abs(a[i])){
                               //do nothing    
                                   cout<<"do nothing 1";
                           }
                           else if(abs(st.top())==abs(a[i])){
                                   st.pop();
                           }
                           else{
                                 while(st.size()>0 && st.top()>0 && a[i]<0 && abs(a[i])>=st.top()){
                                        if(abs(a[i])>st.top()){
                                               st.pop();  
                                        }
                                        else{
                                                st.pop();
                                                f=1;
                                                cout<<"f=1"<<endl;
                                                break;
                                        }
                                        // cout<<i<<endl;
                                 }
                                  if((st.size()==0 || st.top()*a[i]>0 )&& f==0){
                                          st.push(a[i]);
                                         // cout<<"kk";
                                  }
                                  
                           }
                    }
            }
            vector<int> ans;
            while(st.size()>0){
                    ans.push_back(st.top());
                    st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
            
    }
};