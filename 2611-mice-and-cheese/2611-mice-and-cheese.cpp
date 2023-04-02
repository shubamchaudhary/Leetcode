class Solution {
public:
    int miceAndCheese(vector<int>& r1, vector<int>& r2, int k) {
        vector<int> diff;
            int n=r1.size();
            for(int i=0;i<n;i++){
                    diff.push_back(r2[i]-r1[i]);
            }
           heapSort(diff,r1,r2,n);
            int ans=0;
            for(int i=0;i<k;i++){
                    ans+=r1[i];
            }
            for(int i=k;i<n;i++){
                    ans+=r2[i];
            }
        return ans;

    }
void heapify(vector<int> &diff,vector<int> &r1,vector<int> &r2, int N, int i)
{
 
    
    int largest = i;
 
    int l = 2 * i + 1;
 
    int r = 2 * i + 2;
 
    
    if (l < N && diff[l] > diff[largest])
        largest = l;
 
    
    if (r < N && diff[r] > diff[largest])
        largest = r;
 
    
    if (largest != i) {
        swap(diff[i], diff[largest]);
        swap(r1[i], r1[largest]);
        swap(r2[i], r2[largest]);
        
        heapify(diff,r1,r2, N, largest);
    }
}
void heapSort(vector<int> &diff,vector<int> &r1,vector<int> &r2, int N)
{
 
   
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(diff,r1,r2, N, i);
 
   
    for (int i = N - 1; i > 0; i--) {
 
        
        swap(diff[0], diff[i]);
        swap(r1[0], r1[i]);
        swap(r2[0], r2[i]);
      
        heapify(diff,r1,r2, i, 0);
    }
}
};