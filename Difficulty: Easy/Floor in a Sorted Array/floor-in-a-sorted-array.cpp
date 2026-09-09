class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        for(int i=arr.size()-1; i >=0; i--){
            if(arr[i] <= x){
                return i;
            }
        }
        return -1;
    }
};
