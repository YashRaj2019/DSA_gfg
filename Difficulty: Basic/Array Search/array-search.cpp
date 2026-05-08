class Solution {
  public:
  
    int linearSearch(vector<int> &arr, int x, int index, int n){
   
    // base case
    if(index==n){
        return -1;
    }
    
    if(arr[index] == x){
        return index;
    }
    
    return linearSearch(arr, x, index+1, n);
    
}
    
    int search(vector<int>& arr, int x) {
        // code here
        // int n=arr.size();
        
        // for(int i=0;i<n;i++){
        //     if(arr[i]==x){
        //         return i;
        //         break;
        //     }
        // }
        // return -1;
        
        int n = arr.size();
        
        return linearSearch(arr, x, 0, n);
        
        
        
        
    }
};