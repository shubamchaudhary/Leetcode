class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
            int n=pushed.size();
            int ind=0;
            for(int i=0;i<n;i++){
                    if(st.size()==0 || st.top()!=popped[ind]){
                            st.push(pushed[i]);
                    }
                   while(st.size()>0 && ind<n && popped[ind]==st.top()){
                    st.pop();
                    ind++;
            }
            }
           
            return st.size()==0;
    }
};