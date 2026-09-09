class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == k){
                return true;
                break;
            }
        }
        
        return false;
    }
};