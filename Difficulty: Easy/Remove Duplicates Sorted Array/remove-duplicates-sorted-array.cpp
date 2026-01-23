class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n==0){
            return {};
        }
        
        int k = 1;
        
        for(int i=1; i<n;i++){
            if(arr[i]!= arr[i-1]){
                arr[k++] = arr[i];
            }
        }
        
        arr.resize(k);
        return arr;
    }
};