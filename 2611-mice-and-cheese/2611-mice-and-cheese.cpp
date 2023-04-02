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
 
    // Initialize largest as root
    int largest = i;
 
    // left = 2*i + 1
    int l = 2 * i + 1;
 
    // right = 2*i + 2
    int r = 2 * i + 2;
 
    // If left child is larger than root
    if (l < N && diff[l] > diff[largest])
        largest = l;
 
    // If right child is larger than largest
    // so far
    if (r < N && diff[r] > diff[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(diff[i], diff[largest]);
        swap(r1[i], r1[largest]);
        swap(r2[i], r2[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapify(diff,r1,r2, N, largest);
    }
}
void heapSort(vector<int> &diff,vector<int> &r1,vector<int> &r2, int N)
{
 
    // Build heap (rearrange array)
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(diff,r1,r2, N, i);
 
    // One by one extract an element
    // from heap
    for (int i = N - 1; i > 0; i--) {
 
        // Move current root to end
        swap(diff[0], diff[i]);
        swap(r1[0], r1[i]);
        swap(r2[0], r2[i]);
        // call max heapify on the reduced heap
        heapify(diff,r1,r2, i, 0);
    }
}
};