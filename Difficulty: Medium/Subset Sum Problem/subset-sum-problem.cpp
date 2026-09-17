class Solution {
  public:
  
    bool findSubset(int index, int sum, vector<int>&arr){
        
        if(sum == 0){
            return 1;
        }
        
        if(sum < 0 || index < 0){
            return 0;
        }
        
        return findSubset(index-1, sum - arr[index], arr) || findSubset(index-1, sum, arr);
    }
    
    
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        return findSubset(n-1, sum, arr);
    }
};