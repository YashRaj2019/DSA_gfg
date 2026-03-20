class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        // first element
        
        if(n==1 || arr[0] > arr[1]){
            return 0;
        }
        
        // middle elements
        
        for(int i=1; i<n-1; i++){
            if(arr[i] > arr[i-1] && arr[i]> arr[i+1]){
                return i;
            }
        }
        
        // last element 
        return n-1;
    }
};