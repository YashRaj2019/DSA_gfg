class Solution {
  public:
    int numOfSubset(vector<int> &arr) {
        // Your code goes here
        sort(arr.begin(), arr.end());
        int count = 1;
        
        for(int i=1; i<arr.size(); i++){
            if(arr[i] != arr[i -1] + 1){
                count++;
            }
        }
        return count;
    }
};