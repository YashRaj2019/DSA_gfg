class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr[0].size(); j++){
                if(arr[i][j] == x){
                    return true;
                }
            }
        }
        
        return false;
    }
};