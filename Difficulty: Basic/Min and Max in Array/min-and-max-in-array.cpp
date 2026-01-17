class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        int m = arr[0];
        int M = arr[0];
        
    for(int i=0;i<n;i++){
        m=min(m, arr[i]);
        M=max(M, arr[i]);
    }
    
    return {m, M};
        
    }
};