class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        
        int total = 0;
        
        // calculate total sum
        
        for(int i=0; i<arr.size();i++){
            total += arr[i];
        }
        
        int left = 0;
        
        // find the equilibium index
        
        for(int i=0; i<arr.size();i++){
            int right = total - left -arr[i];
            
            if(left == right){
                return i;
            }
            left += arr[i];
        }
        
        return -1;
    }
};